#!/usr/bin/env python3
"""
Generate file structure for Mini ECU project (Project 3)
Based on layered architecture pattern matching Projects 1 & 2
"""

import os

BASE = os.path.dirname(os.path.abspath(__file__))
SRC  = os.path.join(BASE, "Src")

DOXYGEN = """\
/**
* @file    {filename}
* @author (developer)  
* @author(reviewer)
* @brief  
* @details
* @version
* @date
* @copyright Copyright (c) 2026, Gestell Company
*/
"""

# ──────────────────────────────────────────────────────────────
# Layer  ► Module  ► [files without extension]
# Convention: every driver has _Config.h / _Interface.h / _Private.h / _Program.c
# ──────────────────────────────────────────────────────────────

MCAL_DRIVERS = ["DIO", "ADC", "UART", "TIMER0", "PWM", "EXTI"]

HAL_DRIVERS  = ["LED", "BUTTON", "BUZZER", "LCD", "SENSOR"]

# APP modules (each gets the same 4-file pattern)
APP_MODULES  = ["ECU", "ECU_Manager", "FaultManager", "Diagnostic"]

# ──────────────────────────────────────────────────────────────
# Helpers
# ──────────────────────────────────────────────────────────────

def write_file(path, content):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w") as f:
        f.write(content)
    print(f"  [+] {os.path.relpath(path, SRC)}")


def make_doxygen(filename):
    return DOXYGEN.format(filename=filename)


def make_driver(layer_dir, driver_name):
    """Create the 4 standard files for any driver/module."""
    drv_dir = os.path.join(layer_dir, driver_name)
    prefix  = driver_name

    files = [
        (f"{prefix}_Config.h",    "Configuration macros and user-adjustable constants."),
        (f"{prefix}_Interface.h", "Public API declarations (types, function prototypes, enums)."),
        (f"{prefix}_Private.h",   "Private register maps, internal macros, and implementation details."),
        (f"{prefix}_Program.c",   "Driver implementation (function definitions)."),
    ]

    for fname, _ in files:
        write_file(os.path.join(drv_dir, fname), make_doxygen(fname))


# ──────────────────────────────────────────────────────────────
# LIB layer  (header-only, no sub-folders)
# ──────────────────────────────────────────────────────────────

def make_lib(src_dir):
    lib_dir = os.path.join(src_dir, "LIB")
    for fname in ["STD_TYPES.h", "BIT_MATH.h"]:
        write_file(os.path.join(lib_dir, fname), make_doxygen(fname))


# ──────────────────────────────────────────────────────────────
# MCAL layer
# ──────────────────────────────────────────────────────────────

def make_mcal(src_dir):
    mcal_dir = os.path.join(src_dir, "MCAL")
    # Register map (shared header at MCAL root)
    write_file(os.path.join(mcal_dir, "Atmega32regmap.h"),
               make_doxygen("Atmega32regmap.h"))
    for drv in MCAL_DRIVERS:
        make_driver(mcal_dir, drv)


# ──────────────────────────────────────────────────────────────
# HAL layer
# ──────────────────────────────────────────────────────────────

def make_hal(src_dir):
    hal_dir = os.path.join(src_dir, "HAL")
    for drv in HAL_DRIVERS:
        make_driver(hal_dir, drv)


# ──────────────────────────────────────────────────────────────
# APP layer
# ──────────────────────────────────────────────────────────────

def make_app(src_dir):
    app_dir = os.path.join(src_dir, "APP")
    for mod in APP_MODULES:
        make_driver(app_dir, mod)


# ──────────────────────────────────────────────────────────────
# main.c  (at Src root)
# ──────────────────────────────────────────────────────────────

def make_main(src_dir):
    write_file(os.path.join(src_dir, "main.c"), make_doxygen("main.c"))


# ──────────────────────────────────────────────────────────────
# Entry point
# ──────────────────────────────────────────────────────────────

def main():
    print(f"\n=== Generating Mini ECU Project Structure ===")
    print(f"Target: {SRC}\n")

    make_lib(SRC)
    make_mcal(SRC)
    make_hal(SRC)
    make_app(SRC)
    make_main(SRC)

    print("\n=== Done! ===\n")


if __name__ == "__main__":
    main()
