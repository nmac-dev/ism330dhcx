/// @file  internal_structs.h
/// @brief ISM330DHCX Internal Structs

#ifndef __ISM330DHCX__INTERNAL_STRUCTS_H__
#define __ISM330DHCX__INTERNAL_STRUCTS_H__

#include "c-nstd/types.h"


/// NOTE: internal structures are denoted with the prefix "_"


/// @struct _ism330dhcx__TEMPLATE_s
/// @brief  ISM330DHCX template
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved {0}
            u8_t RESERVED_1   : 1;    // [1]   Reserved {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved {0}
            u8_t RESERVED_5   : 1;    // [5]   Reserved {0}
            u8_t RESERVED_6   : 1;    // [6]   Reserved {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved {0}
        };
    } bf;

} _ism330dhcx__TEMPLATE_s;


/* General Configuration Registers */


/// @struct _ism330dhcx__FUNC_CFG_ACCESS_s
/// @brief  ISM330DHCX embedded functions control register
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                       // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0      : 1;    // [0]   Reserved                                                        {0}
            u8_t RESERVED_1      : 1;    // [1]   Reserved                                                        {0}
            u8_t RESERVED_2      : 1;    // [2]   Reserved                                                        {0}
            u8_t RESERVED_3      : 1;    // [3]   Reserved                                                        {0}
            u8_t RESERVED_4      : 1;    // [4]   Reserved                                                        {0}
            u8_t RESERVED_5      : 1;    // [5]   Reserved                                                        {0}
            u8_t SHUB_REG_ACCESS : 1;    // [6]   Enable access to the sensor hub (I²C master) registers          {0}
            u8_t FUNC_CFG_ACCESS : 1;    // [7]   Enable access to the embedded functions configuration registers {0}
        };
    } bf;

} _ism330dhcx__FUNC_CFG_ACCESS_s;


/// @struct _ism330dhcx__FUNC_CFG_ACCESS_s
/// @brief  ISM330DHCX embedded functions control register
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x3F}
        struct {
            u8_t RESERVED_0 : 1;    // [0]   Reserved                                         {1}
            u8_t RESERVED_1 : 1;    // [1]   Reserved                                         {1}
            u8_t RESERVED_2 : 1;    // [2]   Reserved                                         {1}
            u8_t RESERVED_3 : 1;    // [3]   Reserved                                         {1}
            u8_t RESERVED_4 : 1;    // [4]   Reserved                                         {1}
            u8_t RESERVED_5 : 1;    // [5]   Reserved                                         {1}
            u8_t OIS_PU_DIS : 1;    // [6]   Enable pull-up on SDO pin                        {0}
            u8_t SDO_PU_EN  : 1;    // [7]   Disable pull-up on both OCS_Aux and SDO_Aux pins {0}
        };
    } bf;

} _ism330dhcx__FUNC_CFG_ACCESS_s;


/* FIFO Registers */


/// @struct _ism330dhcx__FIFO_CTRL1_s
/// @brief  ISM330DHCX FIFO control register 1
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;            // [7:0] Full value of the register {0x00}
        struct {
            u8_t WTM0 : 1;    // [0]   FIFO watermark threshold {0}
            u8_t WTM1 : 1;    // [1]   FIFO watermark threshold {0}
            u8_t WTM2 : 1;    // [2]   FIFO watermark threshold {0}
            u8_t WTM3 : 1;    // [3]   FIFO watermark threshold {0}
            u8_t WTM4 : 1;    // [4]   FIFO watermark threshold {0}
            u8_t WTM5 : 1;    // [5]   FIFO watermark threshold {0}
            u8_t WTM6 : 1;    // [6]   FIFO watermark threshold {0}
            u8_t WTM7 : 1;    // [7]   FIFO watermark threshold {0}
        };
    } bf;

} _ism330dhcx__FIFO_CTRL1_s;


/// @struct _ism330dhcx__FIFO_CTRL2_s
/// @brief  ISM330DHCX FIFO control register 2
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                        // [7:0] Full value of the register {0x00}
        struct {
            u8_t WTM8             : 1;    // [0]   FIFO watermark threshold                       {0}
            u8_t UNCOPTR_RATE     : 2;    // [2:1] Configures compression algorithm               {0}
            u8_t RESERVED_3       : 1;    // [3]   Reserved                                       {0}
            u8_t ODRCHG_EN        : 1;    // [4]   Enables ODR CHANGE virtual sensor batching     {0}
            u8_t RESERVED_5       : 1;    // [5]   Reserved                                       {0}
            u8_t FIFO_COMPR_RT_EN : 1;    // [6]   Enables/Disables compression algorithm runtime {0}
            u8_t STOP_ON_WTM      : 1;    // [7]   Stop values memorization at threshold level    {0}
        };
    } bf;

} _ism330dhcx__FIFO_CTRL2_s;


/// @struct _ism330dhcx__FIFO_CTRL3_s
/// @brief  ISM330DHCX FIFO control register 3
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;              // [7:0] Full value of the register {0x00}
        struct {
            u8_t BDR_XL : 4;    // [3:0] Selects Batch Data Rate (accelerometer) {0}
            u8_t BDR_GY : 4;    // [7:4] Selects Batch Data Rate (gyroscope)     {0}
        };
    } bf;

} _ism330dhcx__FIFO_CTRL3_s;


/// @struct _ism330dhcx__FIFO_CTRL4_s
/// @brief  ISM330DHCX FIFO control register 4
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x00}
        struct {
            u8_t FIFO_MODE    : 3;    // [2:0] FIFO mode selection                       {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                  {0}
            u8_t ODR_T_BATCH  : 2;    // [5:4] Selects batch data rate (temperature)     {0}
            u8_t DEC_TS_BATCH : 2;    // [7:6] Selects decimation for timestamp batching {0}
        };
    } bf;

} _ism330dhcx__FIFO_CTRL4_s;


/// @struct _ism330dhcx__FIFO_CTRL_s
/// @brief  ISM330DHCX FIFO control register (1|2|3|4)
typedef struct
{
    adr_u32c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u32_t full;                        // [31:0] Full value of the register {0x00}
        struct {
            // FIFO_CTRL1|2
            u32_t WTM              : 9;    // [8:0]  FIFO watermark threshold                        {0}
            // FIFO_CTRL2
            u32_t UNCOPTR_RATE     : 2;    // [10:9]  Configures compression algorithm               {0}
            u32_t RESERVED_3       : 1;    // [11]    Reserved                                       {0}
            u32_t ODRCHG_EN        : 1;    // [12]    Enables ODR CHANGE virtual sensor batching     {0}
            u32_t RESERVED_5       : 1;    // [13]    Reserved                                       {0}
            u32_t FIFO_COMPR_RT_EN : 1;    // [14]    Enables/Disables compression algorithm runtime {0}
            u32_t STOP_ON_WTM      : 1;    // [15]    Stop values memorization at threshold level    {0}
            // FIFO_CTRL3
            u32_t BDR_XL           : 4;    // [19:16] Selects Batch Data Rate (accelerometer)        {0}
            u32_t BDR_GY           : 4;    // [23:20] Selects Batch Data Rate (gyroscope)            {0}
            // FIFO_CTRL4
            u32_t FIFO_MODE        : 3;    // [26:24] FIFO mode selection                            {0}
            u32_t RESERVED_27      : 1;    // [27]    Reserved                                       {0}
            u32_t ODR_T_BATCH      : 2;    // [29:28] Selects batch data rate (temperature)          {0}
            u32_t DEC_TS_BATCH     : 2;    // [31:30] Selects decimation for timestamp batching      {0}
        };
    } bf;

} _ism330dhcx__FIFO_CTRL_s;


/// @struct  _ism330dhcx__COUNTER_BDR_REG1_s
/// @brief   ISM330DHCX Counter batch data rate register 1
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                        // [7:0] Full value of the register {0x00}
        struct {
            u8_t CNT_BDR_TH_8     : 1;    // [0]   Threshold for the internal counter of batch events                               {0}
            u8_t CNT_BDR_TH_9     : 1;    // [1]   Threshold for the internal counter of batch events                               {0}
            u8_t CNT_BDR_TH_10    : 1;    // [2]   Threshold for the internal counter of batch events                               {0}
            u8_t RESERVED_3       : 1;    // [3]   Reserved                                                                         {0}
            u8_t RESERVED_4       : 1;    // [4]   Reserved                                                                         {0}
            u8_t TRIG_COUNTER_BDR : 1;    // [5]   Selects the trigger for the internal counter of batch events between XL and gyro {0}
            u8_t RST_COUNTER_BDR  : 1;    // [6]   Resets the internal counter of batch events for a single sensor                  {0}
            u8_t dataready_pulsed : 1;    // [7]   Enables pulsed data-ready mode                                                   {0}
        };
    } bf;

} _ism330dhcx__COUNTER_BDR_REG1_s;


/// @struct  _ism330dhcx__COUNTER_BDR_REG2_s
/// @brief   ISM330DHCX Counter batch data rate register 2
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x00}
        struct {
            u8_t CNT_BDR_TH_0 : 1;    // [0]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_1 : 1;    // [1]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_2 : 1;    // [2]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_3 : 1;    // [3]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_4 : 1;    // [4]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_5 : 1;    // [5]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_6 : 1;    // [6]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_7 : 1;    // [7]   Threshold for the internal counter of batch events {0}
        };
    } bf;

} _ism330dhcx__COUNTER_BDR_REG2_s;


/// @struct  _ism330dhcx__COUNTER_BDR_REG_s
/// @brief   ISM330DHCX Counter batch data rate register (2|1)
/// @warning COUNTER_BDR_REG 1 & 2 have an unconventional bit order and must be send in reverse order (COUNTER_BDR_REG2|COUNTER_BDR_REG1)
typedef struct
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                        // [15:0] Full value of the register {0x0000}
        struct {
            // COUNTER_BDR_REG2|1
            u16_t CNT_BDR_TH       : 11;   // [10:0] Threshold for the internal counter of batch events                               {000 00000000}
            // COUNTER_BDR_REG1
            u16_t RESERVED_3       : 1;    // [11]   Reserved                                                                         {0}
            u16_t RESERVED_4       : 1;    // [12]   Reserved                                                                         {0}
            u16_t TRIG_COUNTER_BDR : 1;    // [13]   Selects the trigger for the internal counter of batch events between XL and gyro {0}
            u16_t RST_COUNTER_BDR  : 1;    // [14]   Resets the internal counter of batch events for a single sensor                  {0}
            u16_t dataready_pulsed : 1;    // [15]   Enables pulsed data-ready mode                                                   {0}

        };
    } bf;

} _ism330dhcx__COUNTER_BDR_REG_s;


/// @struct _ism330dhcx__FIFO_STATUS1_s
/// @brief  ISM330DHCX FIFO status register 1
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                   // [7:0] Full value of the register {output}
        struct {
            u8_t DIFF_FIFO_0 : 1;    // [0]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_1 : 1;    // [1]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_2 : 1;    // [2]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_3 : 1;    // [3]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_4 : 1;    // [4]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_5 : 1;    // [5]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_6 : 1;    // [6]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_7 : 1;    // [7]   Number of unread sensor data stored in FIFO {output}
        };
    } bf;

} _ism330dhcx__FIFO_STATUS1_s;


/// @struct _ism330dhcx__FIFO_STATUS2_s
/// @brief  ISM330DHCX FIFO status register 2
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                        // [7:0] Full value of the register {output}
        struct {
            u8_t DIFF_FIFO_8      : 1;    // [0]   Number of unread sensor data stored in FIFO         {output}
            u8_t DIFF_FIFO_9      : 1;    // [1]   Number of unread sensor data stored in FIFO         {output}
            u8_t RESERVED_11      : 1;    // [2]   Reserved                                            {output}
            u8_t FIFO_OVR_LATCHED : 1;    // [3]   Latched FIFO overrun status                         {output}
            u8_t COUNTER_BDR_IA   : 1;    // [4]   Counter BDR reaches the CNT_BDR_TH_[10:0] threshold {output}
            u8_t FIFO_FULL_IA     : 1;    // [5]   Smart FIFO full status                              {output}
            u8_t FIFO_OVR_IA      : 1;    // [6]   FIFO overrun status                                 {output}
            u8_t FIFO_WTM_IA      : 1;    // [7]   FIFO watermark status                               {output}
        };
    } bf;

} _ism330dhcx__FIFO_STATUS2_s;


/// @struct _ism330dhcx__FIFO_STATUS_s
/// @brief  ISM330DHCX FIFO status register (1|2)
typedef struct
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                        // [15:0] Full value of the register {output}
        struct {
            // FIFO_STATUS1|2
            u16_t DIFF_FIFO        : 10;   // [9:0]  Number of unread sensor data stored in FIFO         {output}
            // FIFO_STATUS2
            u16_t RESERVED_11      : 1;    // [10]   Reserved                                            {output}
            u16_t FIFO_OVR_LATCHED : 1;    // [11]   Latched FIFO overrun status                         {output}
            u16_t COUNTER_BDR_IA   : 1;    // [12]   Counter BDR reaches the CNT_BDR_TH_[10:0] threshold {output}
            u16_t FIFO_FULL_IA     : 1;    // [13]   Smart FIFO full status                              {output}
            u16_t FIFO_OVR_IA      : 1;    // [14]   FIFO overrun status                                 {output}
            u16_t FIFO_WTM_IA      : 1;    // [15]   FIFO watermark status                               {output}
        };
    } bf;

} _ism330dhcx__FIFO_STATUS_s;


/// @struct _ism330dhcx__FIFO_DATA_OUT_TAG_s
/// @brief  ISM330DHCX FIFO tag register
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x00}
        struct {
            u8_t TAG_PARITY   : 1;    // [0]   Identifies the sensor                           {output}
            u8_t TAG_CNT      : 2;    // [2:1] 2-bit counter which identifies sensor time slot {output}
            u8_t TAG_SENSOR   : 5;    // [7:3] Selects batch data rate (temperature)           {output}
        };
    } bf;

} _ism330dhcx__FIFO_DATA_OUT_TAG_s;


/// @struct _ism330dhcx__FIFO_DATA_OUT_X_s
/// @brief  ISM330DHCX FIFO data output X
typedef reg_u16_s _ism330dhcx__FIFO_DATA_OUT_X_s;


/// @struct _ism330dhcx__FIFO_DATA_OUT_Y_s
/// @brief  ISM330DHCX FIFO data output Y
typedef reg_u16_s _ism330dhcx__FIFO_DATA_OUT_Y_s;


/// @struct _ism330dhcx__FIFO_DATA_OUT_Z_s
/// @brief  ISM330DHCX FIFO data output Z
typedef reg_u16_s _ism330dhcx__FIFO_DATA_OUT_Z_s;


/* Interrupt Registers */


/// @struct _ism330dhcx__INT1_CTRL_s
/// @brief  ISM330DHCX INT1 pin control register [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT1_DRDY_XL   : 1;    // [0]   Enables accelerometer data-ready interrupt on INT1 pin {0}
            u8_t INT1_DRDY_G    : 1;    // [1]   Enables gyroscope data-ready interrupt on INT1 pin     {0}
            u8_t INT1_BOOT      : 1;    // [2]   Enables boot status on INT1 pin                        {0}
            u8_t INT1_FIFO_TH   : 1;    // [3]   Enables FIFO threshold interrupt on INT1 pin           {0}
            u8_t INT1_FIFO_OVR  : 1;    // [4]   Enables FIFO overrun interrupt on INT1 pin             {0}
            u8_t INT1_FIFO_FULL : 1;    // [5]   Enables FIFO full flag interrupt on INT1 pin           {0}
            u8_t INT1_CNT_BDR   : 1;    // [6]   Enables COUNTER_BDR_IA interrupt on INT1               {0}
            u8_t DEN_DRDY_flag  : 1;    // [7]   Sends DEN_DRDY to INT1 pin                             {0}
        };
    } bf;

} _ism330dhcx__INT1_CTRL_s;


/// @struct _ism330dhcx__INT2_CTRL_s
/// @brief  ISM330DHCX INT2 pin control register [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT2_DRDY_XL   : 1;    // [0]   Enables accelerometer data-ready interrupt on INT2 pin      {0}
            u8_t INT2_DRDY_G    : 1;    // [1]   Enables gyroscope data-ready interrupt on INT2 pin          {0}
            u8_t INT2_DRDY_TEMP : 1;    // [2]   Enables temperature sensor data-ready interrupt on INT2 pin {0}
            u8_t INT_FIFO_TH    : 1;    // [3]   Enables FIFO threshold interrupt on INT2 pin                {0}
            u8_t INT2_FIFO_OVR  : 1;    // [4]   Enables FIFO overrun interrupt on INT2 pin                  {0}
            u8_t INT2_FIFO_FULL : 1;    // [5]   Enables FIFO full flag interrupt on INT2 pin                {0}
            u8_t INT2_CNT_BDR   : 1;    // [6]   Enables COUNTER_BDR_IA interrupt on INT2 pin                {0}
            u8_t RESERVED_7     : 1;    // [7]   Reserved                                                    {0}
        };
    } bf;

} _ism330dhcx__INT2_CTRL_s;


/// @struct _ism330dhcx__INT_CTRL_s
/// @brief  ISM330DHCX INT pin control register (1|2) [r/w]
typedef struct
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                      // [7:0] Full value of the register {0x00}
        struct {
            // INT1
            u16_t INT1_DRDY_XL   : 1;    // [0]   Enables accelerometer data-ready interrupt on INT1 pin      {0}
            u16_t INT1_DRDY_G    : 1;    // [1]   Enables gyroscope data-ready interrupt on INT1 pin          {0}
            u16_t INT1_BOOT      : 1;    // [2]   Enables boot status on INT1 pin                             {0}
            u16_t INT1_FIFO_TH   : 1;    // [3]   Enables FIFO threshold interrupt on INT1 pin                {0}
            u16_t INT1_FIFO_OVR  : 1;    // [4]   Enables FIFO overrun interrupt on INT1 pin                  {0}
            u16_t INT1_FIFO_FULL : 1;    // [5]   Enables FIFO full flag interrupt on INT1 pin                {0}
            u16_t INT1_CNT_BDR   : 1;    // [6]   Enables COUNTER_BDR_IA interrupt on INT1                    {0}
            u16_t DEN_DRDY_flag  : 1;    // [7]   Sends DEN_DRDY to INT1 pin                                  {0}
            // INT2
            u16_t INT2_DRDY_XL   : 1;    // [8]   Enables accelerometer data-ready interrupt on INT2 pin      {0}
            u16_t INT2_DRDY_G    : 1;    // [9]   Enables gyroscope data-ready interrupt on INT2 pin          {0}
            u16_t INT2_DRDY_TEMP : 1;    // [10]  Enables temperature sensor data-ready interrupt on INT2 pin {0}
            u16_t INT_FIFO_TH    : 1;    // [11]  Enables FIFO threshold interrupt on INT2 pin                {0}
            u16_t INT2_FIFO_OVR  : 1;    // [12]  Enables FIFO overrun interrupt on INT2 pin                  {0}
            u16_t INT2_FIFO_FULL : 1;    // [13]  Enables FIFO full flag interrupt on INT2 pin                {0}
            u16_t INT2_CNT_BDR   : 1;    // [14]  Enables COUNTER_BDR_IA interrupt on INT2 pin                {0}
            u16_t RESERVED_7     : 1;    // [15]  Reserved                                                    {0}
        };
    } bf;

} _ism330dhcx__INT_CTRL_s;


/// @struct _ism330dhcx__ALL_INT_SRC_s
/// @brief  ISM330DHCX Source register for all interrupts [r]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register {output}
        struct {
            u8_t FF_IA              : 1;    // [0]   Free-fall event status                             {0}
            u8_t WU_IA              : 1;    // [1]   Wake-up event status                               {0}
            u8_t SINGLE_TAP         : 1;    // [2]   Single-tap event status                            {0}
            u8_t DOUBLE_TAP         : 1;    // [3]   Double-tap event status                            {0}
            u8_t D6D_IA             : 1;    // [4]   Interrupt active for 6-D detection                 {0}
            u8_t SLEEP_CHANGE_IA    : 1;    // [5]   Detects change event in activity/inactivity status {0}
            u8_t RESERVED_6         : 1;    // [6]   Reserved                                           {0}
            u8_t TIMESTAMP_ENDCOUNT : 1;    // [7]   Alerts timestamp overflow within 6.4 ms            {0}
        };
    } bf;

} _ism330dhcx__ALL_INT_SRC_s;


/// @struct _ism330dhcx__WAKE_UP_SRC_s
/// @brief  ISM330DHCX Wake-up interrupt source register [r]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                       // [7:0] Full value of the register {output}
        struct {
            u8_t Z_WU            : 1;    // [0]   Wakeup event detection status on Z-axis            {0}
            u8_t Y_WU            : 1;    // [1]   Wakeup event detection status on Y-axis            {0}
            u8_t X_WU            : 1;    // [2]   Wakeup event detection status on X-axis            {0}
            u8_t WU_IA           : 1;    // [3]   Wakeup event detection status                      {0}
            u8_t SLEEP_STATE     : 1;    // [4]   Sleep event status                                 {0}
            u8_t FF_IA           : 1;    // [5]   Free-fall event detection status                   {0}
            u8_t SLEEP_CHANGE_IA : 1;    // [6]   Detects change event in activity/inactivity status {0}
            u8_t RESERVED_7      : 1;    // [7]   Reserved                                           {0}
        };
    } bf;

} _ism330dhcx__WAKE_UP_SRC_s;


/// @struct _ism330dhcx__TAP_SRC_s
/// @brief  ISM330DHCX Tap source register [r]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {output}
        struct {
            u8_t Z_TAP      : 1;    // [0]   Tap event detection status on Z-axis       {0}
            u8_t Y_TAP      : 1;    // [1]   Tap event detection status on Y-axis       {0}
            u8_t X_TAP      : 1;    // [2]   Tap event detection status on X-axis       {0}
            u8_t TAP_SIGN   : 1;    // [3]   Sign of acceleration detected by tap event {0}
            u8_t DOUBLE_TAP : 1;    // [4]   Double-tap event detection status          {0}
            u8_t SINGLE_TAP : 1;    // [5]   Single-tap event status                    {0}
            u8_t TAP_IA     : 1;    // [6]   Tap event detection status                 {0}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                                   {0}
        };
    } bf;

} _ism330dhcx__TAP_SRC_s;


/// @struct _ism330dhcx__D6D_SRC_s
/// @brief  ISM330DHCX 6-D detection register [r]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                // [7:0] Full value of the register {output}
        struct {
            u8_t XL       : 1;    // [0]   X-axis low event  (under threshold) {0}
            u8_t XH       : 1;    // [1]   X-axis high event (over threshold)  {0}
            u8_t YL       : 1;    // [2]   Y-axis low event  (under threshold) {0}
            u8_t YH       : 1;    // [3]   Y-axis high event (over threshold)  {0}
            u8_t ZL       : 1;    // [4]   Z-axis low event  (under threshold) {0}
            u8_t ZH       : 1;    // [5]   Z-axis high event (over threshold)  {0}
            u8_t D6D_IA   : 1;    // [6]   Interrupt active for 6-D Detection  {0}
            u8_t DEN_DRDY : 1;    // [7]   DEN data-ready signal               {0}
        };
    } bf;

} _ism330dhcx__D6D_SRC_s;


/// @struct _ism330dhcx__STATUS_REG_s
/// @brief  ISM330DHCX STATUS_REG register (read by the primary interface I²C/SPI) [r]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {output}
        struct {
            u8_t XLDA         : 1;    // [0]   new accelerometer data available {0}
            u8_t GDA          : 1;    // [1]   new gyroscope data available     {0}
            u8_t TDA          : 1;    // [2]   new temperature data available   {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                         {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved                         {0}
            u8_t RESERVED_5   : 1;    // [5]   Reserved                         {0}
            u8_t RESERVED_6   : 1;    // [6]   Reserved                         {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                         {0}
        };
    } bf;

} _ism330dhcx__STATUS_REG_s;


/// @struct _ism330dhcx__STATUS_SPIAux_s
/// @brief  ISM330DHCX STATUS_SPIAux register (read by the auxiliary SPI) [r]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                     // [7:0] Full value of the register {output}
        struct {
            u8_t XLDA          : 1;    // [0]   accelerometer data available                            {0}
            u8_t GDA           : 1;    // [1]   gyroscope data available                                {0}
            u8_t GYRO_SETTLING : 1;    // [2]   High when the gyroscope output is in the settling phase {0}
            u8_t RESERVED_3    : 1;    // [3]   Reserved                                                {0}
            u8_t RESERVED_4    : 1;    // [4]   Reserved                                                {0}
            u8_t RESERVED_5    : 1;    // [5]   Reserved                                                {0}
            u8_t RESERVED_6    : 1;    // [6]   Reserved                                                {0}
            u8_t RESERVED_7    : 1;    // [7]   Reserved                                                {0}
        };
    } bf;

} _ism330dhcx__STATUS_SPIAux_s;


/* Control Registers */


/// @struct _ism330dhcx__CTRL1_XL_s
/// @brief  ISM330DHCX control register 1 (accelerometer)
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0 : 1;    // [0]   Reserved                                {0}
            u8_t LPF2_XL_EN : 1;    // [1]   Accelerometer high-resolution selection {0}
            u8_t FS_XL      : 2;    // [3:2] Accelerometer full-scale selection      {00}
            u8_t ODR_XL     : 3;    // [7:4] Accelerometer ODR selection             {0000}
        };
    } bf;

} _ism330dhcx__CTRL1_XL_s;


/// @struct _ism330dhcx__CTRL2_G_s
/// @brief  ISM330DHCX control register 2 (gyroscope)
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x00}
        struct {
            u8_t FS_4000    : 1;    // [0]   Selects gyro chain full-scale ±4000 dps {0}
            u8_t FS_125     : 1;    // [1]   Selects gyro chain full-scale ±125  dps {0}
            u8_t FS_G       : 2;    // [3:2] Gyroscope chain full-scale selection    {00}
            u8_t ODR_G      : 3;    // [7:4] Gyroscope output data rate selection    {0000}
        };
    } bf;

} _ism330dhcx__CTRL2_G_s;


/// @struct _ism330dhcx__CTRL3_C_s
/// @brief  ISM330DHCX control register 3
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x04}
        struct {
            u8_t SW_RESET   : 1;    // [0]   Software reset                                       {0}
            u8_t RESERVED_1 : 1;    // [1]   Reserved                                             {0}
            u8_t IF_INC     : 1;    // [2]   Register address automatically incremented (on read) {1}
            u8_t SIM        : 1;    // [3]   SPI Serial Interface Mode selection                  {0}
            u8_t PP_OD      : 1;    // [4]   Push-pull/open-drain selection on INT1 and INT2 pins {0}
            u8_t H_LACTIVE  : 1;    // [5]   Interrupt activation level                           {0}
            u8_t BDU        : 1;    // [6]   Block Data Update                                    {0}
            u8_t BOOT       : 1;    // [7]   Reboots memory content                               {0}
        };
    } bf;

} _ism330dhcx__CTRL3_C_s;


/// @struct _ism330dhcx__CTRL4_C_s
/// @brief  ISM330DHCX control register 4
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                           {0}
            u8_t LPF1_SEL_G   : 1;    // [1]   Enables gyroscope digital LPF1                     {0}
            u8_t I2C_DISABLE  : 1;    // [2]   Disables I2C interface                             {0}
            u8_t DRDY_MASK    : 1;    // [3]   Enables data available                             {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved                                           {0}
            u8_t INT2_ON_INT1 : 2;    // [5]   All interrupt signals available on INT1 pin enable {0}
            u8_t SLEEP_G      : 1;    // [6]   Enables gyroscope Sleep mode                       {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                                           {0}
        };
    } bf;

} _ism330dhcx__CTRL4_C_s;


/// @struct _ism330dhcx__CTRL5_C_s
/// @brief  ISM330DHCX control register 5
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x00}
        struct {
            u8_t ST_XL      : 2;    // [1:0] Linear acceleration sensor self-test enable                 {00}
            u8_t ST_G       : 2;    // [3:2] Angular rate sensor self-test enable                        {00}
            u8_t RESERVED_4 : 1;    // [4]   Reserved                                                    {0}
            u8_t ROUNDING   : 2;    // [6:5] Circular burst-mode (rounding) read of the output registers {00}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                                                    {0}
        };
    } bf;

} _ism330dhcx__CTRL5_C_s;


/// @struct _ism330dhcx__CTRL6_C_s
/// @brief  ISM330DHCX control register 6
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x00}
        struct {
            u8_t FTYPE      : 3;    // [2:0] Gyroscope low-pass filter (LPF1) bandwidth selection       {000}
            u8_t USR_OFF_W  : 1;    // [3]   Weight of XL user offset bits of register                  {0}
            u8_t XL_HM_MODE : 1;    // [4]   Disables high-performance operating mode for accelerometer {0}
            u8_t LVL2_EN    : 1;    // [5]   Enables DEN level-sensitive latched mode                   {0}
            u8_t LVL1_EN    : 1;    // [6]   Enables DEN data level-sensitive trigger mode              {0}
            u8_t TRIG_EN    : 1;    // [7]   Enables DEN data edge-sensitive  trigger mode              {0}
        };
    } bf;

} _ism330dhcx__CTRL6_C_s;


/// @struct _ism330dhcx__CTRL7_G_s
/// @brief  ISM330DHCX control register 7 (gyroscope)
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register {0x00}
        struct {
            u8_t OIS_ON         : 1;    // [0]   Enables the OIS chain from primary interface when the OIS_ON_EN bit is '1' {0}
            u8_t USR_OFF_ON_OUT : 1;    // [1]   Enables accelerometer user offset correction block                         {0}
            u8_t OIS_ON_EN      : 1;    // [2]   Selects how to enable and disable the OIS chain                            {0}
            u8_t RESERVED_3     : 1;    // [3]   Reserved                                                                   {0}
            u8_t HPM_G          : 2;    // [4:5] Gyroscope digital HP filter cutoff selection                               {00}
            u8_t HP_EN_G        : 1;    // [6]   Enables gyroscope digital high-pass filter                                 {0}
            u8_t G_HM_MODE      : 1;    // [7]   Disables gyroscope high-performance operating mode                         {0}
        };
    } bf;

} _ism330dhcx__CTRL7_G_s;


/// @struct _ism330dhcx__CTRL8_XL_s
/// @brief  ISM330DHCX control register 8 (accelerometer)
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register {0x00}
        struct {
            u8_t LOW_PASS_ON_6D    : 1;    // [0]   LPF2 on 6D function selection                                     {0}
            u8_t RESERVED_1        : 1;    // [1]   Reserved                                                          {0}
            u8_t HP_SLOPE_XL_EN    : 1;    // [2]   Accelerometer slope filter / high-pass filter selection           {0}
            u8_t FASTSETTL_MODE_XL : 1;    // [3]   Enables accelerometer LPF2 and HPF fast-settling mode             {0}
            u8_t HP_REF_MODE_XL    : 1;    // [4]   Enables accelerometer high-pass filter reference mode             {0}
            u8_t HPCF_XL           : 3;    // [5:7] Accelerometer LPF2 and HP filter configuration and cutoff setting {000}
        };
    } bf;

} _ism330dhcx__CTRL8_XL_s;


/// @struct _ism330dhcx__CTRL9_XL_s
/// @brief  ISM330DHCX control register 9 (accelerometer)
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                   // [7:0] Full value of the register {0xE0}
        struct {
            u8_t RESERVED_0  : 1;    // [0] Reserved                                          {0}
            u8_t DEVICE_CONF : 1;    // [1] Enables the proper device configuration           {0}
            u8_t DEN_LH      : 1;    // [2] DEN active level configuration                    {0}
            u8_t DEN_XL_EN   : 1;    // [3] Extends DEN functionality to accelerometer sensor {0}
            u8_t DEN_XL_G    : 1;    // [4] DEN stamping sensor selection                     {0}
            u8_t DEN_Z       : 1;    // [5] DEN value stored in LSB of Z-axis                 {1}
            u8_t DEN_Y       : 1;    // [6] DEN value stored in LSB of Y-axis                 {1}
            u8_t DEN_X       : 1;    // [7] DEN value stored in LSB of X-axis                 {1}
        };
    } bf;

} _ism330dhcx__CTRL9_XL_s;


/// @struct _ism330dhcx__CTRL10_C_s
/// @brief  ISM330DHCX control register 10
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0   : 1;    // [0] Reserved                  {0}
            u8_t RESERVED_1   : 1;    // [1] Reserved                  {0}
            u8_t RESERVED_2   : 1;    // [2] Reserved                  {0}
            u8_t RESERVED_3   : 1;    // [3] Reserved                  {0}
            u8_t RESERVED_4   : 1;    // [4] Reserved                  {0}
            u8_t TIMESTAMP_EN : 1;    // [5] Enables timestamp counter {0}
            u8_t RESERVED_6   : 1;    // [6] Reserved                  {0}
            u8_t RESERVED_7   : 1;    // [7] Reserved                  {0}
        };
    } bf;

} _ism330dhcx__CTRL10_C_s;


/* Output Registers */


/// @struct _ism330dhcx__OUT_TEMP_s
/// @brief  ISM330DHCX Temperature data output register [r]
typedef reg_u16_s _ism330dhcx__OUT_TEMP_s;


/// @struct _ism330dhcx__OUTX_G_s
/// @brief  ISM330DHCX Angular rate sensor pitch axis (X) angular rate output register [r]
typedef reg_u16_s _ism330dhcx__OUTX_G_s;


/// @struct _ism330dhcx__OUTY_G_s
/// @brief  ISM330DHCX Angular rate sensor roll axis (Y) angular rate output register [r]
typedef reg_u16_s _ism330dhcx__OUTY_G_s;


/// @struct _ism330dhcx__OUTZ_G_s
/// @brief  ISM330DHCX Angular rate sensor yaw axis (Z) angular rate output register [r]
typedef reg_u16_s _ism330dhcx__OUTZ_G_s;


/// @struct _ism330dhcx__OUTX_A_s
/// @brief  ISM330DHCX Linear acceleration sensor X-axis output register [r]
typedef reg_u16_s _ism330dhcx__OUTX_A_s;


/// @struct _ism330dhcx__OUTY_A_s
/// @brief  ISM330DHCX Linear acceleration sensor Y-axis output register [r]
typedef reg_u16_s _ism330dhcx__OUTY_A_s;


/// @struct _ism330dhcx__OUTZ_A_s
/// @brief  ISM330DHCX Linear acceleration sensor Z-axis output register [r]
typedef reg_u16_s _ism330dhcx__OUTZ_A_s;


/// TODO: /* Motion Registers */


/// TODO: /* OIS and Offset Registers */


#endif /* __ISM330DHCX__INTERNAL_STRUCTS_H__ */
