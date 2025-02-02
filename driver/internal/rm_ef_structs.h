/// @file  internal/rm_ef_structs.h
/// @brief ISM330DHCX Internal Structs for Embedded Advanced Features Page 1 Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__

#include "c-nstd/types.h"


/// NOTE: Embedded advanced features registers are accessible when PAGE_SEL[3:0] is set to '0001' in n PAGE_SEL (register)


/* General Configuration Registers */


/// @struct _ism330dhcx_rm_ef__PAGE_SEL_s
/// @brief  ISM330DHCX Enable advanced features dedicated page [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register {0x01}
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                    {1}
            u8_t RESERVED_1   : 1;    // [1]   Reserved                                    {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved                                    {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                    {0}
            u8_t PAGE_SEL     : 4;    // [7:4] Select the advanced features dedicated page {0000}
        };
    } bf;

} _ism330dhcx_rm_ef__PAGE_SEL_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_EN_A_s
/// @brief  ISM330DHCX Embedded functions enable register (A) [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0     : 1;    // [0]   Reserved                                     {0}
            u8_t RESERVED_1     : 1;    // [1]   Reserved                                     {0}
            u8_t RESERVED_2     : 1;    // [2]   Reserved                                     {0}
            u8_t PEDO_EN        : 1;    // [3]   Enable pedometer algorithm                   {0}
            u8_t TILT_EN        : 1;    // [4]   Enable tilt calculation                      {0}
            u8_t SIGN_MOTION_EN : 1;    // [5]   Enable significant motion detection function {0}
            u8_t RESERVED_6     : 1;    // [6]   Reserved                                     {0}
            u8_t RESERVED_7     : 1;    // [7]   Reserved                                     {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_EN_A_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_EN_B_s
/// @brief  ISM330DHCX Embedded functions enable register (B) [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                     // [7:0] Full value of the register {0x00}
        struct {
            u8_t FSM_EN        : 1;    // [0]   Enable Finite State Machine (FSM) feature {0}
            u8_t RESERVED_1    : 1;    // [1]   Reserved                                  {0}
            u8_t RESERVED_2    : 1;    // [2]   Reserved                                  {0}
            u8_t FIFO_COMPR_EN : 1;    // [1]   Enable FIFO compression feature           {0}
            u8_t MLC_EN        : 1;    // [2]   Enable Machine Learning Core feature      {0}
            u8_t RESERVED_5    : 1;    // [5]   Reserved                                  {0}
            u8_t RESERVED_6    : 1;    // [6]   Reserved                                  {0}
            u8_t RESERVED_7    : 1;    // [7]   Reserved                                  {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_EN_B_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_EN_s
/// @brief  ISM330DHCX Embedded functions enable register (A|B) [r/w]
typedef struct
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                     // [15:0] Full value of the register {0x00}
        struct {
            u16_t FSM_EN        : 1;    // [0]   Enable Finite State Machine (FSM) feature {0}
            u16_t RESERVED_1    : 1;    // [1]   Reserved                                  {0}
            u16_t RESERVED_2    : 1;    // [2]   Reserved                                  {0}
            u16_t FIFO_COMPR_EN : 1;    // [1]   Enable FIFO compression feature           {0}
            u16_t MLC_EN        : 1;    // [2]   Enable Machine Learning Core feature      {0}
            u16_t RESERVED_5    : 1;    // [5]   Reserved                                  {0}
            u16_t RESERVED_6    : 1;    // [6]   Reserved                                  {0}
            u16_t RESERVED_7    : 1;    // [7]   Reserved                                  {0}
            u16_t FSM_EN        : 1;    // [8]   Enable Finite State Machine (FSM) feature {0}
            u16_t RESERVED_9    : 1;    // [9]   Reserved                                  {0}
            u16_t RESERVED_10   : 1;    // [10]  Reserved                                  {0}
            u16_t FIFO_COMPR_EN : 1;    // [11]  Enable FIFO compression feature           {0}
            u16_t MLC_EN        : 1;    // [12]  Enable Machine Learning Core feature      {0}
            u16_t RESERVED_13   : 1;    // [13]  Reserved                                  {0}
            u16_t RESERVED_14   : 1;    // [14]  Reserved                                  {0}
            u16_t RESERVED_15   : 1;    // [15]  Reserved                                  {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_EN_s;


/// @struct _ism330dhcx_rm_ef__PAGE_ADDRESS_s
/// @brief  ISM330DHCX Page address register [r/w]
typedef reg_u8_s _ism330dhcx_rm_ef__PAGE_ADDRESS_s;


/// @struct _ism330dhcx_rm_ef__PAGE_VALUE_s
/// @brief  ISM330DHCX Page value register [r/w]
typedef reg_u8_s _ism330dhcx_rm_ef__PAGE_VALUE_s;


#endif /* __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__ */
