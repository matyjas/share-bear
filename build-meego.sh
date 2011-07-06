#!/bin/sh -e

export PKG_CONFIG_PATH=/Users/maciej/QtSDK1.1/Madde/sysroots/harmattan-arm-sysroot/usr/lib/pkgconfig/

qmake sharebear.pro -r -spec linux-g++-maemo -unix