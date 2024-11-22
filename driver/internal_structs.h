/// @file  internal_structs.h
/// @brief ISM330DHCX Internal Structs

#ifndef __ISM330DHCX__INTERNAL_STRUCTS_H__
#define __ISM330DHCX__INTERNAL_STRUCTS_H__

#include "c-nstd/types.h"


/// NOTE: internal structures are denoted with the prefix "_"


/// TODO: /* General Configuration Registers */


/// TODO: /* FIFO Registers */


/// TODO: /* Interrupt Registers */


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


/// TODO: /* Output Registers */


/// TODO: /* Motion Registers */


/// TODO: /* OIS and Offset Registers */


#endif /* __ISM330DHCX__INTERNAL_STRUCTS_H__ */
