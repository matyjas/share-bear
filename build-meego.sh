#!/bin/sh -e

# force qmake to run by deleting the Makefile
rm Makefile

export PKG_CONFIG_PATH=/Users/maciej/QtSDK1.1/Madde/sysroots/harmattan-arm-sysroot/usr/lib/pkgconfig/

#mad -t harmattan-platform-api pkg-config --libs share-widgets

qmake sharebear.pro -r -spec linux-g++-maemo -unix

make -w

