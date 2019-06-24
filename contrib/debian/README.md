
Debian
====================
This directory contains files used to package BitalGod/BitalGo-qt
for Debian-based Linux systems. If you compile BitalGod/BitalGo-qt yourself, there are some useful files here.

## BitalGo: URI support ##


BitalGo-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install BitalGo-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your BitalGo-qt binary to `/usr/bin`
and the `../../share/pixmaps/BitalGo128.png` to `/usr/share/pixmaps`

BitalGo-qt.protocol (KDE)

