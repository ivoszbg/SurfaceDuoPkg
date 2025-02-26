#!/bin/bash

gzip -c < ./Build/SurfaceDuo-AARCH64/DEBUG_CLANG38/FV/SM8150_EFI.fd >uefi_image
cat ./ImageResources/dtb >>uefi_image

python2 ./ImageResources/mkbootimg.py \
  --kernel ./uefi_image \
  --ramdisk ./ImageResources/ramdisk \
  -o ./boot.img \
  --pagesize 4096 \
  --header_version 2 \
  --cmdline "" \
  --dtb ./ImageResources/dtb \
  --base 0x0 \
  --os_version 10.0.0 \
  --os_patch_level 2021-11-01 \
  --second_offset 0xf00000
