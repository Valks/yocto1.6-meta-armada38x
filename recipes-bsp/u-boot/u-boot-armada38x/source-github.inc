UBOOT_VERSION = "2013.01"
UBOOT_MARVELL_VERSION = "2015_T1.0"

SRCBRANCH_armada38x = "u-boot-2013.01-15t1"
SRCBRANCH_clearfog = "u-boot-2013.01-15t1-clearfog"
SRCREV_armada38x = "b21a7137318cdccd1d6569c27dddd33447328770"
SRCREV_clearfog = "ea24ac55a2ed199a1f511c1f7ebbfce2976d6c39"
SRC_URI = "git://git@github.com/SolidRun/u-boot-armada38x;branch=${SRCBRANCH};protocol=https \
"

#PV = "${LINUX_VERSION}+git${SRCPV}"       # for versioning by git commit
S = "${WORKDIR}/git"
