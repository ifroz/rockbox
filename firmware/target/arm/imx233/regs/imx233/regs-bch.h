/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.7
 * XML versions: imx233:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN__IMX233__BCH__H__
#define __HEADERGEN__IMX233__BCH__H__

#define REGS_BCH_BASE (0x8000a000)

#define REGS_BCH_VERSION "3.2.0"

/**
 * Register: HW_BCH_CTRL
 * Address: 0
 * SCT: yes
*/
#define HW_BCH_CTRL                         (*(volatile unsigned long *)(REGS_BCH_BASE + 0x0 + 0x0))
#define HW_BCH_CTRL_SET                     (*(volatile unsigned long *)(REGS_BCH_BASE + 0x0 + 0x4))
#define HW_BCH_CTRL_CLR                     (*(volatile unsigned long *)(REGS_BCH_BASE + 0x0 + 0x8))
#define HW_BCH_CTRL_TOG                     (*(volatile unsigned long *)(REGS_BCH_BASE + 0x0 + 0xc))
#define BP_BCH_CTRL_SFTRST                  31
#define BM_BCH_CTRL_SFTRST                  0x80000000
#define BV_BCH_CTRL_SFTRST__RUN             0x0
#define BV_BCH_CTRL_SFTRST__RESET           0x1
#define BF_BCH_CTRL_SFTRST(v)               (((v) << 31) & 0x80000000)
#define BF_BCH_CTRL_SFTRST_V(v)             ((BV_BCH_CTRL_SFTRST__##v << 31) & 0x80000000)
#define BP_BCH_CTRL_CLKGATE                 30
#define BM_BCH_CTRL_CLKGATE                 0x40000000
#define BV_BCH_CTRL_CLKGATE__RUN            0x0
#define BV_BCH_CTRL_CLKGATE__NO_CLKS        0x1
#define BF_BCH_CTRL_CLKGATE(v)              (((v) << 30) & 0x40000000)
#define BF_BCH_CTRL_CLKGATE_V(v)            ((BV_BCH_CTRL_CLKGATE__##v << 30) & 0x40000000)
#define BP_BCH_CTRL_RSVD5                   23
#define BM_BCH_CTRL_RSVD5                   0x3f800000
#define BF_BCH_CTRL_RSVD5(v)                (((v) << 23) & 0x3f800000)
#define BP_BCH_CTRL_DEBUGSYNDROME           22
#define BM_BCH_CTRL_DEBUGSYNDROME           0x400000
#define BF_BCH_CTRL_DEBUGSYNDROME(v)        (((v) << 22) & 0x400000)
#define BP_BCH_CTRL_RSVD4                   20
#define BM_BCH_CTRL_RSVD4                   0x300000
#define BF_BCH_CTRL_RSVD4(v)                (((v) << 20) & 0x300000)
#define BP_BCH_CTRL_M2M_LAYOUT              18
#define BM_BCH_CTRL_M2M_LAYOUT              0xc0000
#define BF_BCH_CTRL_M2M_LAYOUT(v)           (((v) << 18) & 0xc0000)
#define BP_BCH_CTRL_M2M_ENCODE              17
#define BM_BCH_CTRL_M2M_ENCODE              0x20000
#define BF_BCH_CTRL_M2M_ENCODE(v)           (((v) << 17) & 0x20000)
#define BP_BCH_CTRL_M2M_ENABLE              16
#define BM_BCH_CTRL_M2M_ENABLE              0x10000
#define BF_BCH_CTRL_M2M_ENABLE(v)           (((v) << 16) & 0x10000)
#define BP_BCH_CTRL_RSVD3                   11
#define BM_BCH_CTRL_RSVD3                   0xf800
#define BF_BCH_CTRL_RSVD3(v)                (((v) << 11) & 0xf800)
#define BP_BCH_CTRL_DEBUG_STALL_IRQ_EN      10
#define BM_BCH_CTRL_DEBUG_STALL_IRQ_EN      0x400
#define BF_BCH_CTRL_DEBUG_STALL_IRQ_EN(v)   (((v) << 10) & 0x400)
#define BP_BCH_CTRL_RSVD2                   9
#define BM_BCH_CTRL_RSVD2                   0x200
#define BF_BCH_CTRL_RSVD2(v)                (((v) << 9) & 0x200)
#define BP_BCH_CTRL_COMPLETE_IRQ_EN         8
#define BM_BCH_CTRL_COMPLETE_IRQ_EN         0x100
#define BF_BCH_CTRL_COMPLETE_IRQ_EN(v)      (((v) << 8) & 0x100)
#define BP_BCH_CTRL_RSVD1                   4
#define BM_BCH_CTRL_RSVD1                   0xf0
#define BF_BCH_CTRL_RSVD1(v)                (((v) << 4) & 0xf0)
#define BP_BCH_CTRL_BM_ERROR_IRQ            3
#define BM_BCH_CTRL_BM_ERROR_IRQ            0x8
#define BF_BCH_CTRL_BM_ERROR_IRQ(v)         (((v) << 3) & 0x8)
#define BP_BCH_CTRL_DEBUG_STALL_IRQ         2
#define BM_BCH_CTRL_DEBUG_STALL_IRQ         0x4
#define BF_BCH_CTRL_DEBUG_STALL_IRQ(v)      (((v) << 2) & 0x4)
#define BP_BCH_CTRL_RSVD0                   1
#define BM_BCH_CTRL_RSVD0                   0x2
#define BF_BCH_CTRL_RSVD0(v)                (((v) << 1) & 0x2)
#define BP_BCH_CTRL_COMPLETE_IRQ            0
#define BM_BCH_CTRL_COMPLETE_IRQ            0x1
#define BF_BCH_CTRL_COMPLETE_IRQ(v)         (((v) << 0) & 0x1)

/**
 * Register: HW_BCH_STATUS0
 * Address: 0x10
 * SCT: no
*/
#define HW_BCH_STATUS0                              (*(volatile unsigned long *)(REGS_BCH_BASE + 0x10))
#define BP_BCH_STATUS0_HANDLE                       20
#define BM_BCH_STATUS0_HANDLE                       0xfff00000
#define BF_BCH_STATUS0_HANDLE(v)                    (((v) << 20) & 0xfff00000)
#define BP_BCH_STATUS0_COMPLETED_CE                 16
#define BM_BCH_STATUS0_COMPLETED_CE                 0xf0000
#define BF_BCH_STATUS0_COMPLETED_CE(v)              (((v) << 16) & 0xf0000)
#define BP_BCH_STATUS0_STATUS_BLK0                  8
#define BM_BCH_STATUS0_STATUS_BLK0                  0xff00
#define BV_BCH_STATUS0_STATUS_BLK0__ZERO            0x0
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR1          0x1
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR2          0x2
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR3          0x3
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR4          0x4
#define BV_BCH_STATUS0_STATUS_BLK0__UNCORRECTABLE   0xfe
#define BV_BCH_STATUS0_STATUS_BLK0__ERASED          0xff
#define BF_BCH_STATUS0_STATUS_BLK0(v)               (((v) << 8) & 0xff00)
#define BF_BCH_STATUS0_STATUS_BLK0_V(v)             ((BV_BCH_STATUS0_STATUS_BLK0__##v << 8) & 0xff00)
#define BP_BCH_STATUS0_RSVD1                        5
#define BM_BCH_STATUS0_RSVD1                        0xe0
#define BF_BCH_STATUS0_RSVD1(v)                     (((v) << 5) & 0xe0)
#define BP_BCH_STATUS0_ALLONES                      4
#define BM_BCH_STATUS0_ALLONES                      0x10
#define BF_BCH_STATUS0_ALLONES(v)                   (((v) << 4) & 0x10)
#define BP_BCH_STATUS0_CORRECTED                    3
#define BM_BCH_STATUS0_CORRECTED                    0x8
#define BF_BCH_STATUS0_CORRECTED(v)                 (((v) << 3) & 0x8)
#define BP_BCH_STATUS0_UNCORRECTABLE                2
#define BM_BCH_STATUS0_UNCORRECTABLE                0x4
#define BF_BCH_STATUS0_UNCORRECTABLE(v)             (((v) << 2) & 0x4)
#define BP_BCH_STATUS0_RSVD0                        0
#define BM_BCH_STATUS0_RSVD0                        0x3
#define BF_BCH_STATUS0_RSVD0(v)                     (((v) << 0) & 0x3)

/**
 * Register: HW_BCH_MODE
 * Address: 0x20
 * SCT: no
*/
#define HW_BCH_MODE                     (*(volatile unsigned long *)(REGS_BCH_BASE + 0x20))
#define BP_BCH_MODE_RSVD                8
#define BM_BCH_MODE_RSVD                0xffffff00
#define BF_BCH_MODE_RSVD(v)             (((v) << 8) & 0xffffff00)
#define BP_BCH_MODE_ERASE_THRESHOLD     0
#define BM_BCH_MODE_ERASE_THRESHOLD     0xff
#define BF_BCH_MODE_ERASE_THRESHOLD(v)  (((v) << 0) & 0xff)

/**
 * Register: HW_BCH_ENCODEPTR
 * Address: 0x30
 * SCT: no
*/
#define HW_BCH_ENCODEPTR            (*(volatile unsigned long *)(REGS_BCH_BASE + 0x30))
#define BP_BCH_ENCODEPTR_ADDR       0
#define BM_BCH_ENCODEPTR_ADDR       0xffffffff
#define BF_BCH_ENCODEPTR_ADDR(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_DATAPTR
 * Address: 0x40
 * SCT: no
*/
#define HW_BCH_DATAPTR          (*(volatile unsigned long *)(REGS_BCH_BASE + 0x40))
#define BP_BCH_DATAPTR_ADDR     0
#define BM_BCH_DATAPTR_ADDR     0xffffffff
#define BF_BCH_DATAPTR_ADDR(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_METAPTR
 * Address: 0x50
 * SCT: no
*/
#define HW_BCH_METAPTR          (*(volatile unsigned long *)(REGS_BCH_BASE + 0x50))
#define BP_BCH_METAPTR_ADDR     0
#define BM_BCH_METAPTR_ADDR     0xffffffff
#define BF_BCH_METAPTR_ADDR(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_LAYOUTSELECT
 * Address: 0x70
 * SCT: no
*/
#define HW_BCH_LAYOUTSELECT                 (*(volatile unsigned long *)(REGS_BCH_BASE + 0x70))
#define BP_BCH_LAYOUTSELECT_CS15_SELECT     30
#define BM_BCH_LAYOUTSELECT_CS15_SELECT     0xc0000000
#define BF_BCH_LAYOUTSELECT_CS15_SELECT(v)  (((v) << 30) & 0xc0000000)
#define BP_BCH_LAYOUTSELECT_CS14_SELECT     28
#define BM_BCH_LAYOUTSELECT_CS14_SELECT     0x30000000
#define BF_BCH_LAYOUTSELECT_CS14_SELECT(v)  (((v) << 28) & 0x30000000)
#define BP_BCH_LAYOUTSELECT_CS13_SELECT     26
#define BM_BCH_LAYOUTSELECT_CS13_SELECT     0xc000000
#define BF_BCH_LAYOUTSELECT_CS13_SELECT(v)  (((v) << 26) & 0xc000000)
#define BP_BCH_LAYOUTSELECT_CS12_SELECT     24
#define BM_BCH_LAYOUTSELECT_CS12_SELECT     0x3000000
#define BF_BCH_LAYOUTSELECT_CS12_SELECT(v)  (((v) << 24) & 0x3000000)
#define BP_BCH_LAYOUTSELECT_CS11_SELECT     22
#define BM_BCH_LAYOUTSELECT_CS11_SELECT     0xc00000
#define BF_BCH_LAYOUTSELECT_CS11_SELECT(v)  (((v) << 22) & 0xc00000)
#define BP_BCH_LAYOUTSELECT_CS10_SELECT     20
#define BM_BCH_LAYOUTSELECT_CS10_SELECT     0x300000
#define BF_BCH_LAYOUTSELECT_CS10_SELECT(v)  (((v) << 20) & 0x300000)
#define BP_BCH_LAYOUTSELECT_CS9_SELECT      18
#define BM_BCH_LAYOUTSELECT_CS9_SELECT      0xc0000
#define BF_BCH_LAYOUTSELECT_CS9_SELECT(v)   (((v) << 18) & 0xc0000)
#define BP_BCH_LAYOUTSELECT_CS8_SELECT      16
#define BM_BCH_LAYOUTSELECT_CS8_SELECT      0x30000
#define BF_BCH_LAYOUTSELECT_CS8_SELECT(v)   (((v) << 16) & 0x30000)
#define BP_BCH_LAYOUTSELECT_CS7_SELECT      14
#define BM_BCH_LAYOUTSELECT_CS7_SELECT      0xc000
#define BF_BCH_LAYOUTSELECT_CS7_SELECT(v)   (((v) << 14) & 0xc000)
#define BP_BCH_LAYOUTSELECT_CS6_SELECT      12
#define BM_BCH_LAYOUTSELECT_CS6_SELECT      0x3000
#define BF_BCH_LAYOUTSELECT_CS6_SELECT(v)   (((v) << 12) & 0x3000)
#define BP_BCH_LAYOUTSELECT_CS5_SELECT      10
#define BM_BCH_LAYOUTSELECT_CS5_SELECT      0xc00
#define BF_BCH_LAYOUTSELECT_CS5_SELECT(v)   (((v) << 10) & 0xc00)
#define BP_BCH_LAYOUTSELECT_CS4_SELECT      8
#define BM_BCH_LAYOUTSELECT_CS4_SELECT      0x300
#define BF_BCH_LAYOUTSELECT_CS4_SELECT(v)   (((v) << 8) & 0x300)
#define BP_BCH_LAYOUTSELECT_CS3_SELECT      6
#define BM_BCH_LAYOUTSELECT_CS3_SELECT      0xc0
#define BF_BCH_LAYOUTSELECT_CS3_SELECT(v)   (((v) << 6) & 0xc0)
#define BP_BCH_LAYOUTSELECT_CS2_SELECT      4
#define BM_BCH_LAYOUTSELECT_CS2_SELECT      0x30
#define BF_BCH_LAYOUTSELECT_CS2_SELECT(v)   (((v) << 4) & 0x30)
#define BP_BCH_LAYOUTSELECT_CS1_SELECT      2
#define BM_BCH_LAYOUTSELECT_CS1_SELECT      0xc
#define BF_BCH_LAYOUTSELECT_CS1_SELECT(v)   (((v) << 2) & 0xc)
#define BP_BCH_LAYOUTSELECT_CS0_SELECT      0
#define BM_BCH_LAYOUTSELECT_CS0_SELECT      0x3
#define BF_BCH_LAYOUTSELECT_CS0_SELECT(v)   (((v) << 0) & 0x3)

/**
 * Register: HW_BCH_FLASH0LAYOUT0
 * Address: 0x80
 * SCT: no
*/
#define HW_BCH_FLASH0LAYOUT0                (*(volatile unsigned long *)(REGS_BCH_BASE + 0x80))
#define BP_BCH_FLASH0LAYOUT0_NBLOCKS        24
#define BM_BCH_FLASH0LAYOUT0_NBLOCKS        0xff000000
#define BF_BCH_FLASH0LAYOUT0_NBLOCKS(v)     (((v) << 24) & 0xff000000)
#define BP_BCH_FLASH0LAYOUT0_META_SIZE      16
#define BM_BCH_FLASH0LAYOUT0_META_SIZE      0xff0000
#define BF_BCH_FLASH0LAYOUT0_META_SIZE(v)   (((v) << 16) & 0xff0000)
#define BP_BCH_FLASH0LAYOUT0_ECC0           12
#define BM_BCH_FLASH0LAYOUT0_ECC0           0xf000
#define BV_BCH_FLASH0LAYOUT0_ECC0__NONE     0x0
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC2     0x1
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC4     0x2
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC6     0x3
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC8     0x4
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC10    0x5
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC12    0x6
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC14    0x7
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC16    0x8
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC18    0x9
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC20    0xa
#define BF_BCH_FLASH0LAYOUT0_ECC0(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH0LAYOUT0_ECC0_V(v)      ((BV_BCH_FLASH0LAYOUT0_ECC0__##v << 12) & 0xf000)
#define BP_BCH_FLASH0LAYOUT0_DATA0_SIZE     0
#define BM_BCH_FLASH0LAYOUT0_DATA0_SIZE     0xfff
#define BF_BCH_FLASH0LAYOUT0_DATA0_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH0LAYOUT1
 * Address: 0x90
 * SCT: no
*/
#define HW_BCH_FLASH0LAYOUT1                (*(volatile unsigned long *)(REGS_BCH_BASE + 0x90))
#define BP_BCH_FLASH0LAYOUT1_PAGE_SIZE      16
#define BM_BCH_FLASH0LAYOUT1_PAGE_SIZE      0xffff0000
#define BF_BCH_FLASH0LAYOUT1_PAGE_SIZE(v)   (((v) << 16) & 0xffff0000)
#define BP_BCH_FLASH0LAYOUT1_ECCN           12
#define BM_BCH_FLASH0LAYOUT1_ECCN           0xf000
#define BV_BCH_FLASH0LAYOUT1_ECCN__NONE     0x0
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC2     0x1
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC4     0x2
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC6     0x3
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC8     0x4
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC10    0x5
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC12    0x6
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC14    0x7
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC16    0x8
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC18    0x9
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC20    0xa
#define BF_BCH_FLASH0LAYOUT1_ECCN(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH0LAYOUT1_ECCN_V(v)      ((BV_BCH_FLASH0LAYOUT1_ECCN__##v << 12) & 0xf000)
#define BP_BCH_FLASH0LAYOUT1_DATAN_SIZE     0
#define BM_BCH_FLASH0LAYOUT1_DATAN_SIZE     0xfff
#define BF_BCH_FLASH0LAYOUT1_DATAN_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH1LAYOUT0
 * Address: 0xa0
 * SCT: no
*/
#define HW_BCH_FLASH1LAYOUT0                (*(volatile unsigned long *)(REGS_BCH_BASE + 0xa0))
#define BP_BCH_FLASH1LAYOUT0_NBLOCKS        24
#define BM_BCH_FLASH1LAYOUT0_NBLOCKS        0xff000000
#define BF_BCH_FLASH1LAYOUT0_NBLOCKS(v)     (((v) << 24) & 0xff000000)
#define BP_BCH_FLASH1LAYOUT0_META_SIZE      16
#define BM_BCH_FLASH1LAYOUT0_META_SIZE      0xff0000
#define BF_BCH_FLASH1LAYOUT0_META_SIZE(v)   (((v) << 16) & 0xff0000)
#define BP_BCH_FLASH1LAYOUT0_ECC0           12
#define BM_BCH_FLASH1LAYOUT0_ECC0           0xf000
#define BV_BCH_FLASH1LAYOUT0_ECC0__NONE     0x0
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC2     0x1
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC4     0x2
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC6     0x3
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC8     0x4
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC10    0x5
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC12    0x6
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC14    0x7
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC16    0x8
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC18    0x9
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC20    0xa
#define BF_BCH_FLASH1LAYOUT0_ECC0(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH1LAYOUT0_ECC0_V(v)      ((BV_BCH_FLASH1LAYOUT0_ECC0__##v << 12) & 0xf000)
#define BP_BCH_FLASH1LAYOUT0_DATA0_SIZE     0
#define BM_BCH_FLASH1LAYOUT0_DATA0_SIZE     0xfff
#define BF_BCH_FLASH1LAYOUT0_DATA0_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH1LAYOUT1
 * Address: 0xb0
 * SCT: no
*/
#define HW_BCH_FLASH1LAYOUT1                (*(volatile unsigned long *)(REGS_BCH_BASE + 0xb0))
#define BP_BCH_FLASH1LAYOUT1_PAGE_SIZE      16
#define BM_BCH_FLASH1LAYOUT1_PAGE_SIZE      0xffff0000
#define BF_BCH_FLASH1LAYOUT1_PAGE_SIZE(v)   (((v) << 16) & 0xffff0000)
#define BP_BCH_FLASH1LAYOUT1_ECCN           12
#define BM_BCH_FLASH1LAYOUT1_ECCN           0xf000
#define BV_BCH_FLASH1LAYOUT1_ECCN__NONE     0x0
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC2     0x1
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC4     0x2
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC6     0x3
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC8     0x4
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC10    0x5
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC12    0x6
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC14    0x7
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC16    0x8
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC18    0x9
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC20    0xa
#define BF_BCH_FLASH1LAYOUT1_ECCN(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH1LAYOUT1_ECCN_V(v)      ((BV_BCH_FLASH1LAYOUT1_ECCN__##v << 12) & 0xf000)
#define BP_BCH_FLASH1LAYOUT1_DATAN_SIZE     0
#define BM_BCH_FLASH1LAYOUT1_DATAN_SIZE     0xfff
#define BF_BCH_FLASH1LAYOUT1_DATAN_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH2LAYOUT0
 * Address: 0xc0
 * SCT: no
*/
#define HW_BCH_FLASH2LAYOUT0                (*(volatile unsigned long *)(REGS_BCH_BASE + 0xc0))
#define BP_BCH_FLASH2LAYOUT0_NBLOCKS        24
#define BM_BCH_FLASH2LAYOUT0_NBLOCKS        0xff000000
#define BF_BCH_FLASH2LAYOUT0_NBLOCKS(v)     (((v) << 24) & 0xff000000)
#define BP_BCH_FLASH2LAYOUT0_META_SIZE      16
#define BM_BCH_FLASH2LAYOUT0_META_SIZE      0xff0000
#define BF_BCH_FLASH2LAYOUT0_META_SIZE(v)   (((v) << 16) & 0xff0000)
#define BP_BCH_FLASH2LAYOUT0_ECC0           12
#define BM_BCH_FLASH2LAYOUT0_ECC0           0xf000
#define BV_BCH_FLASH2LAYOUT0_ECC0__NONE     0x0
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC2     0x1
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC4     0x2
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC6     0x3
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC8     0x4
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC10    0x5
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC12    0x6
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC14    0x7
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC16    0x8
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC18    0x9
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC20    0xa
#define BF_BCH_FLASH2LAYOUT0_ECC0(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH2LAYOUT0_ECC0_V(v)      ((BV_BCH_FLASH2LAYOUT0_ECC0__##v << 12) & 0xf000)
#define BP_BCH_FLASH2LAYOUT0_DATA0_SIZE     0
#define BM_BCH_FLASH2LAYOUT0_DATA0_SIZE     0xfff
#define BF_BCH_FLASH2LAYOUT0_DATA0_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH2LAYOUT1
 * Address: 0xd0
 * SCT: no
*/
#define HW_BCH_FLASH2LAYOUT1                (*(volatile unsigned long *)(REGS_BCH_BASE + 0xd0))
#define BP_BCH_FLASH2LAYOUT1_PAGE_SIZE      16
#define BM_BCH_FLASH2LAYOUT1_PAGE_SIZE      0xffff0000
#define BF_BCH_FLASH2LAYOUT1_PAGE_SIZE(v)   (((v) << 16) & 0xffff0000)
#define BP_BCH_FLASH2LAYOUT1_ECCN           12
#define BM_BCH_FLASH2LAYOUT1_ECCN           0xf000
#define BV_BCH_FLASH2LAYOUT1_ECCN__NONE     0x0
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC2     0x1
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC4     0x2
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC6     0x3
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC8     0x4
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC10    0x5
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC12    0x6
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC14    0x7
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC16    0x8
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC18    0x9
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC20    0xa
#define BF_BCH_FLASH2LAYOUT1_ECCN(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH2LAYOUT1_ECCN_V(v)      ((BV_BCH_FLASH2LAYOUT1_ECCN__##v << 12) & 0xf000)
#define BP_BCH_FLASH2LAYOUT1_DATAN_SIZE     0
#define BM_BCH_FLASH2LAYOUT1_DATAN_SIZE     0xfff
#define BF_BCH_FLASH2LAYOUT1_DATAN_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH3LAYOUT0
 * Address: 0xe0
 * SCT: no
*/
#define HW_BCH_FLASH3LAYOUT0                (*(volatile unsigned long *)(REGS_BCH_BASE + 0xe0))
#define BP_BCH_FLASH3LAYOUT0_NBLOCKS        24
#define BM_BCH_FLASH3LAYOUT0_NBLOCKS        0xff000000
#define BF_BCH_FLASH3LAYOUT0_NBLOCKS(v)     (((v) << 24) & 0xff000000)
#define BP_BCH_FLASH3LAYOUT0_META_SIZE      16
#define BM_BCH_FLASH3LAYOUT0_META_SIZE      0xff0000
#define BF_BCH_FLASH3LAYOUT0_META_SIZE(v)   (((v) << 16) & 0xff0000)
#define BP_BCH_FLASH3LAYOUT0_ECC0           12
#define BM_BCH_FLASH3LAYOUT0_ECC0           0xf000
#define BV_BCH_FLASH3LAYOUT0_ECC0__NONE     0x0
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC2     0x1
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC4     0x2
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC6     0x3
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC8     0x4
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC10    0x5
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC12    0x6
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC14    0x7
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC16    0x8
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC18    0x9
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC20    0xa
#define BF_BCH_FLASH3LAYOUT0_ECC0(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH3LAYOUT0_ECC0_V(v)      ((BV_BCH_FLASH3LAYOUT0_ECC0__##v << 12) & 0xf000)
#define BP_BCH_FLASH3LAYOUT0_DATA0_SIZE     0
#define BM_BCH_FLASH3LAYOUT0_DATA0_SIZE     0xfff
#define BF_BCH_FLASH3LAYOUT0_DATA0_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_FLASH3LAYOUT1
 * Address: 0xf0
 * SCT: no
*/
#define HW_BCH_FLASH3LAYOUT1                (*(volatile unsigned long *)(REGS_BCH_BASE + 0xf0))
#define BP_BCH_FLASH3LAYOUT1_PAGE_SIZE      16
#define BM_BCH_FLASH3LAYOUT1_PAGE_SIZE      0xffff0000
#define BF_BCH_FLASH3LAYOUT1_PAGE_SIZE(v)   (((v) << 16) & 0xffff0000)
#define BP_BCH_FLASH3LAYOUT1_ECCN           12
#define BM_BCH_FLASH3LAYOUT1_ECCN           0xf000
#define BV_BCH_FLASH3LAYOUT1_ECCN__NONE     0x0
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC2     0x1
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC4     0x2
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC6     0x3
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC8     0x4
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC10    0x5
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC12    0x6
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC14    0x7
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC16    0x8
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC18    0x9
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC20    0xa
#define BF_BCH_FLASH3LAYOUT1_ECCN(v)        (((v) << 12) & 0xf000)
#define BF_BCH_FLASH3LAYOUT1_ECCN_V(v)      ((BV_BCH_FLASH3LAYOUT1_ECCN__##v << 12) & 0xf000)
#define BP_BCH_FLASH3LAYOUT1_DATAN_SIZE     0
#define BM_BCH_FLASH3LAYOUT1_DATAN_SIZE     0xfff
#define BF_BCH_FLASH3LAYOUT1_DATAN_SIZE(v)  (((v) << 0) & 0xfff)

/**
 * Register: HW_BCH_DEBUG0
 * Address: 0x100
 * SCT: yes
*/
#define HW_BCH_DEBUG0                                       (*(volatile unsigned long *)(REGS_BCH_BASE + 0x100 + 0x0))
#define HW_BCH_DEBUG0_SET                                   (*(volatile unsigned long *)(REGS_BCH_BASE + 0x100 + 0x4))
#define HW_BCH_DEBUG0_CLR                                   (*(volatile unsigned long *)(REGS_BCH_BASE + 0x100 + 0x8))
#define HW_BCH_DEBUG0_TOG                                   (*(volatile unsigned long *)(REGS_BCH_BASE + 0x100 + 0xc))
#define BP_BCH_DEBUG0_RSVD1                                 27
#define BM_BCH_DEBUG0_RSVD1                                 0xf8000000
#define BF_BCH_DEBUG0_RSVD1(v)                              (((v) << 27) & 0xf8000000)
#define BP_BCH_DEBUG0_ROM_BIST_ENABLE                       26
#define BM_BCH_DEBUG0_ROM_BIST_ENABLE                       0x4000000
#define BF_BCH_DEBUG0_ROM_BIST_ENABLE(v)                    (((v) << 26) & 0x4000000)
#define BP_BCH_DEBUG0_ROM_BIST_COMPLETE                     25
#define BM_BCH_DEBUG0_ROM_BIST_COMPLETE                     0x2000000
#define BF_BCH_DEBUG0_ROM_BIST_COMPLETE(v)                  (((v) << 25) & 0x2000000)
#define BP_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL             16
#define BM_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL             0x1ff0000
#define BV_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__NORMAL     0x0
#define BV_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__TEST_MODE  0x1
#define BF_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL(v)          (((v) << 16) & 0x1ff0000)
#define BF_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL_V(v)        ((BV_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__##v << 16) & 0x1ff0000)
#define BP_BCH_DEBUG0_KES_DEBUG_SHIFT_SYND                  15
#define BM_BCH_DEBUG0_KES_DEBUG_SHIFT_SYND                  0x8000
#define BF_BCH_DEBUG0_KES_DEBUG_SHIFT_SYND(v)               (((v) << 15) & 0x8000)
#define BP_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG                14
#define BM_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG                0x4000
#define BV_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__DATA          0x1
#define BV_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__AUX           0x1
#define BF_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG(v)             (((v) << 14) & 0x4000)
#define BF_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG_V(v)           ((BV_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__##v << 14) & 0x4000)
#define BP_BCH_DEBUG0_KES_DEBUG_MODE4K                      13
#define BM_BCH_DEBUG0_KES_DEBUG_MODE4K                      0x2000
#define BV_BCH_DEBUG0_KES_DEBUG_MODE4K__4k                  0x1
#define BV_BCH_DEBUG0_KES_DEBUG_MODE4K__2k                  0x1
#define BF_BCH_DEBUG0_KES_DEBUG_MODE4K(v)                   (((v) << 13) & 0x2000)
#define BF_BCH_DEBUG0_KES_DEBUG_MODE4K_V(v)                 ((BV_BCH_DEBUG0_KES_DEBUG_MODE4K__##v << 13) & 0x2000)
#define BP_BCH_DEBUG0_KES_DEBUG_KICK                        12
#define BM_BCH_DEBUG0_KES_DEBUG_KICK                        0x1000
#define BF_BCH_DEBUG0_KES_DEBUG_KICK(v)                     (((v) << 12) & 0x1000)
#define BP_BCH_DEBUG0_KES_STANDALONE                        11
#define BM_BCH_DEBUG0_KES_STANDALONE                        0x800
#define BV_BCH_DEBUG0_KES_STANDALONE__NORMAL                0x0
#define BV_BCH_DEBUG0_KES_STANDALONE__TEST_MODE             0x1
#define BF_BCH_DEBUG0_KES_STANDALONE(v)                     (((v) << 11) & 0x800)
#define BF_BCH_DEBUG0_KES_STANDALONE_V(v)                   ((BV_BCH_DEBUG0_KES_STANDALONE__##v << 11) & 0x800)
#define BP_BCH_DEBUG0_KES_DEBUG_STEP                        10
#define BM_BCH_DEBUG0_KES_DEBUG_STEP                        0x400
#define BF_BCH_DEBUG0_KES_DEBUG_STEP(v)                     (((v) << 10) & 0x400)
#define BP_BCH_DEBUG0_KES_DEBUG_STALL                       9
#define BM_BCH_DEBUG0_KES_DEBUG_STALL                       0x200
#define BV_BCH_DEBUG0_KES_DEBUG_STALL__NORMAL               0x0
#define BV_BCH_DEBUG0_KES_DEBUG_STALL__WAIT                 0x1
#define BF_BCH_DEBUG0_KES_DEBUG_STALL(v)                    (((v) << 9) & 0x200)
#define BF_BCH_DEBUG0_KES_DEBUG_STALL_V(v)                  ((BV_BCH_DEBUG0_KES_DEBUG_STALL__##v << 9) & 0x200)
#define BP_BCH_DEBUG0_BM_KES_TEST_BYPASS                    8
#define BM_BCH_DEBUG0_BM_KES_TEST_BYPASS                    0x100
#define BV_BCH_DEBUG0_BM_KES_TEST_BYPASS__NORMAL            0x0
#define BV_BCH_DEBUG0_BM_KES_TEST_BYPASS__TEST_MODE         0x1
#define BF_BCH_DEBUG0_BM_KES_TEST_BYPASS(v)                 (((v) << 8) & 0x100)
#define BF_BCH_DEBUG0_BM_KES_TEST_BYPASS_V(v)               ((BV_BCH_DEBUG0_BM_KES_TEST_BYPASS__##v << 8) & 0x100)
#define BP_BCH_DEBUG0_RSVD0                                 6
#define BM_BCH_DEBUG0_RSVD0                                 0xc0
#define BF_BCH_DEBUG0_RSVD0(v)                              (((v) << 6) & 0xc0)
#define BP_BCH_DEBUG0_DEBUG_REG_SELECT                      0
#define BM_BCH_DEBUG0_DEBUG_REG_SELECT                      0x3f
#define BF_BCH_DEBUG0_DEBUG_REG_SELECT(v)                   (((v) << 0) & 0x3f)

/**
 * Register: HW_BCH_DBGKESREAD
 * Address: 0x110
 * SCT: no
*/
#define HW_BCH_DBGKESREAD           (*(volatile unsigned long *)(REGS_BCH_BASE + 0x110))
#define BP_BCH_DBGKESREAD_VALUES    0
#define BM_BCH_DBGKESREAD_VALUES    0xffffffff
#define BF_BCH_DBGKESREAD_VALUES(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_DBGCSFEREAD
 * Address: 0x120
 * SCT: no
*/
#define HW_BCH_DBGCSFEREAD              (*(volatile unsigned long *)(REGS_BCH_BASE + 0x120))
#define BP_BCH_DBGCSFEREAD_VALUES       0
#define BM_BCH_DBGCSFEREAD_VALUES       0xffffffff
#define BF_BCH_DBGCSFEREAD_VALUES(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_DBGSYNDGENREAD
 * Address: 0x130
 * SCT: no
*/
#define HW_BCH_DBGSYNDGENREAD           (*(volatile unsigned long *)(REGS_BCH_BASE + 0x130))
#define BP_BCH_DBGSYNDGENREAD_VALUES    0
#define BM_BCH_DBGSYNDGENREAD_VALUES    0xffffffff
#define BF_BCH_DBGSYNDGENREAD_VALUES(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_DBGAHBMREAD
 * Address: 0x140
 * SCT: no
*/
#define HW_BCH_DBGAHBMREAD              (*(volatile unsigned long *)(REGS_BCH_BASE + 0x140))
#define BP_BCH_DBGAHBMREAD_VALUES       0
#define BM_BCH_DBGAHBMREAD_VALUES       0xffffffff
#define BF_BCH_DBGAHBMREAD_VALUES(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_BLOCKNAME
 * Address: 0x150
 * SCT: no
*/
#define HW_BCH_BLOCKNAME            (*(volatile unsigned long *)(REGS_BCH_BASE + 0x150))
#define BP_BCH_BLOCKNAME_NAME       0
#define BM_BCH_BLOCKNAME_NAME       0xffffffff
#define BF_BCH_BLOCKNAME_NAME(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_BCH_VERSION
 * Address: 0x160
 * SCT: no
*/
#define HW_BCH_VERSION          (*(volatile unsigned long *)(REGS_BCH_BASE + 0x160))
#define BP_BCH_VERSION_MAJOR    24
#define BM_BCH_VERSION_MAJOR    0xff000000
#define BF_BCH_VERSION_MAJOR(v) (((v) << 24) & 0xff000000)
#define BP_BCH_VERSION_MINOR    16
#define BM_BCH_VERSION_MINOR    0xff0000
#define BF_BCH_VERSION_MINOR(v) (((v) << 16) & 0xff0000)
#define BP_BCH_VERSION_STEP     0
#define BM_BCH_VERSION_STEP     0xffff
#define BF_BCH_VERSION_STEP(v)  (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__IMX233__BCH__H__ */
