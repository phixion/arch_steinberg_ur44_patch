An unprofessional patch to make professional hardware work on professional OSes.

$ abs core/linux

$ cp -R /var/abs/core/linux /var/tmp

$ cd /var/tmp/linux

$ makepkg -o

$ cd /var/tmp/linux/src/sound/usb

$ download patch

$ patch -p1 < quirks-table.h.patch


