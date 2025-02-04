/// @file  internal/rm_ef_structs.h
/// @brief ISM330DHCX Internal Structs for Embedded Advanced Features Page 1 Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__

#include "c-nstd/types.h"


/// NOTE:  Embedded functions registers are accessible when FUNC_CFG_EN is set to '1' in FUNC_CFG_ACCESS


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


/* Interrupt Configuration Registers */


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_INT1_s
/// @brief  ISM330DHCX EMB FUNC INT1 pin control register [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0         : 1;    // [0]   Reserved                                                    {0}
            u8_t RESERVED_1         : 1;    // [1]   Reserved                                                    {0}
            u8_t RESERVED_2         : 1;    // [2]   Reserved                                                    {0}
            u8_t INT1_STEP_DETECTOR : 1;    // [3]   Routing of pedometer step recognition event on INT1         {0}
            u8_t INT1_TILT          : 1;    // [4]   Routing of tilt event on INT1                               {0}
            u8_t INT1_SIG_MOT       : 1;    // [5]   Routing of significant motion event on INT1                 {0}
            u8_t RESERVED_6         : 1;    // [6]   Reserved                                                    {0}
            u8_t INT1_FSM_LC        : 1;    // [7]   Routing of FSM long counter timeout interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_INT1_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT1_A_s
/// @brief  ISM330DHCX FSM INT1 pin control register (A) [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT1_FSM1 : 1;    // [0]   Routing of FSM1 interrupt event on INT1 {0}
            u8_t INT1_FSM2 : 1;    // [1]   Routing of FSM2 interrupt event on INT1 {0}
            u8_t INT1_FSM3 : 1;    // [2]   Routing of FSM3 interrupt event on INT1 {0}
            u8_t INT1_FSM4 : 1;    // [3]   Routing of FSM4 interrupt event on INT1 {0}
            u8_t INT1_FSM5 : 1;    // [4]   Routing of FSM5 interrupt event on INT1 {0}
            u8_t INT1_FSM6 : 1;    // [5]   Routing of FSM6 interrupt event on INT1 {0}
            u8_t INT1_FSM7 : 1;    // [6]   Routing of FSM7 interrupt event on INT1 {0}
            u8_t INT1_FSM8 : 1;    // [7]   Routing of FSM8 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT1_A_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT1_B_s
/// @brief  ISM330DHCX FSM INT1 pin control register (B) [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT1_FSM9  : 1;    // [0]   Routing of FSM9  interrupt event on INT1 {0}
            u8_t INT1_FSM10 : 1;    // [1]   Routing of FSM10 interrupt event on INT1 {0}
            u8_t INT1_FSM11 : 1;    // [2]   Routing of FSM11 interrupt event on INT1 {0}
            u8_t INT1_FSM12 : 1;    // [3]   Routing of FSM12 interrupt event on INT1 {0}
            u8_t INT1_FSM13 : 1;    // [4]   Routing of FSM13 interrupt event on INT1 {0}
            u8_t INT1_FSM14 : 1;    // [5]   Routing of FSM14 interrupt event on INT1 {0}
            u8_t INT1_FSM15 : 1;    // [6]   Routing of FSM15 interrupt event on INT1 {0}
            u8_t INT1_FSM16 : 1;    // [7]   Routing of FSM16 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT1_B_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT1_s
/// @brief  ISM330DHCX FSM INT1 pin control register (A|B) [r/w]
typedef struct
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                  // [7:0]  Full value of the register {0x00}
        struct {
            u16_t INT1_FSM1  : 1;    // [0]    Routing of FSM1  interrupt event on INT1 {0}
            u16_t INT1_FSM2  : 1;    // [1]    Routing of FSM2  interrupt event on INT1 {0}
            u16_t INT1_FSM3  : 1;    // [2]    Routing of FSM3  interrupt event on INT1 {0}
            u16_t INT1_FSM4  : 1;    // [3]    Routing of FSM4  interrupt event on INT1 {0}
            u16_t INT1_FSM5  : 1;    // [4]    Routing of FSM5  interrupt event on INT1 {0}
            u16_t INT1_FSM6  : 1;    // [5]    Routing of FSM6  interrupt event on INT1 {0}
            u16_t INT1_FSM7  : 1;    // [6]    Routing of FSM7  interrupt event on INT1 {0}
            u16_t INT1_FSM8  : 1;    // [7]    Routing of FSM8  interrupt event on INT1 {0}
            u16_t INT1_FSM9  : 1;    // [8]    Routing of FSM9  interrupt event on INT1 {0}
            u16_t INT1_FSM10 : 1;    // [9]    Routing of FSM10 interrupt event on INT1 {0}
            u16_t INT1_FSM11 : 1;    // [10]   Routing of FSM11 interrupt event on INT1 {0}
            u16_t INT1_FSM12 : 1;    // [11]   Routing of FSM12 interrupt event on INT1 {0}
            u16_t INT1_FSM13 : 1;    // [12]   Routing of FSM13 interrupt event on INT1 {0}
            u16_t INT1_FSM14 : 1;    // [13]   Routing of FSM14 interrupt event on INT1 {0}
            u16_t INT1_FSM15 : 1;    // [14]   Routing of FSM15 interrupt event on INT1 {0}
            u16_t INT1_FSM16 : 1;    // [15]   Routing of FSM16 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT1_s;


/// @struct _ism330dhcx_rm_ef__MLC_INT1_s
/// @brief  ISM330DHCX MLC INT1 pin control register [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT1_MLC1 : 1;    // [0]   Routing of MLC1 interrupt event on INT1 {0}
            u8_t INT1_MLC2 : 1;    // [1]   Routing of MLC2 interrupt event on INT1 {0}
            u8_t INT1_MLC3 : 1;    // [2]   Routing of MLC3 interrupt event on INT1 {0}
            u8_t INT1_MLC4 : 1;    // [3]   Routing of MLC4 interrupt event on INT1 {0}
            u8_t INT1_MLC5 : 1;    // [4]   Routing of MLC5 interrupt event on INT1 {0}
            u8_t INT1_MLC6 : 1;    // [5]   Routing of MLC6 interrupt event on INT1 {0}
            u8_t INT1_MLC7 : 1;    // [6]   Routing of MLC7 interrupt event on INT1 {0}
            u8_t INT1_MLC8 : 1;    // [7]   Routing of MLC8 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__MLC_INT1_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_INT2_s
/// @brief  ISM330DHCX EMB FUNC INT2 pin control register [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register {0x00}
        struct {
            u8_t RESERVED_0         : 1;    // [0]   Reserved                                                    {0}
            u8_t RESERVED_1         : 1;    // [1]   Reserved                                                    {0}
            u8_t RESERVED_2         : 1;    // [2]   Reserved                                                    {0}
            u8_t INT2_STEP_DETECTOR : 1;    // [3]   Routing of pedometer step recognition event on INT2         {0}
            u8_t INT2_TILT          : 1;    // [4]   Routing of tilt event on INT2                               {0}
            u8_t INT2_SIG_MOT       : 1;    // [5]   Routing of significant motion event on INT2                 {0}
            u8_t RESERVED_6         : 1;    // [6]   Reserved                                                    {0}
            u8_t INT2_FSM_LC        : 1;    // [7]   Routing of FSM long counter timeout interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_INT2_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT2_A_s
/// @brief  ISM330DHCX FSM INT2 pin control register (A) [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT2_FSM1 : 1;    // [0]   Routing of FSM1 interrupt event on INT2 {0}
            u8_t INT2_FSM2 : 1;    // [1]   Routing of FSM2 interrupt event on INT2 {0}
            u8_t INT2_FSM3 : 1;    // [2]   Routing of FSM3 interrupt event on INT2 {0}
            u8_t INT2_FSM4 : 1;    // [3]   Routing of FSM4 interrupt event on INT2 {0}
            u8_t INT2_FSM5 : 1;    // [4]   Routing of FSM5 interrupt event on INT2 {0}
            u8_t INT2_FSM6 : 1;    // [5]   Routing of FSM6 interrupt event on INT2 {0}
            u8_t INT2_FSM7 : 1;    // [6]   Routing of FSM7 interrupt event on INT2 {0}
            u8_t INT2_FSM8 : 1;    // [7]   Routing of FSM8 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT2_A_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT2_B_s
/// @brief  ISM330DHCX FSM INT2 pin control register (B) [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT2_FSM9  : 1;    // [0]   Routing of FSM9  interrupt event on INT2 {0}
            u8_t INT2_FSM10 : 1;    // [1]   Routing of FSM10 interrupt event on INT2 {0}
            u8_t INT2_FSM11 : 1;    // [2]   Routing of FSM11 interrupt event on INT2 {0}
            u8_t INT2_FSM12 : 1;    // [3]   Routing of FSM12 interrupt event on INT2 {0}
            u8_t INT2_FSM13 : 1;    // [4]   Routing of FSM13 interrupt event on INT2 {0}
            u8_t INT2_FSM14 : 1;    // [5]   Routing of FSM14 interrupt event on INT2 {0}
            u8_t INT2_FSM15 : 1;    // [6]   Routing of FSM15 interrupt event on INT2 {0}
            u8_t INT2_FSM16 : 1;    // [7]   Routing of FSM16 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT2_B_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT2_s
/// @brief  ISM330DHCX FSM INT2 pin control register (A|B) [r/w]
typedef struct
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                  // [7:0]  Full value of the register {0x00}
        struct {
            u16_t INT2_FSM1  : 1;    // [0]    Routing of FSM1  interrupt event on INT2 {0}
            u16_t INT2_FSM2  : 1;    // [1]    Routing of FSM2  interrupt event on INT2 {0}
            u16_t INT2_FSM3  : 1;    // [2]    Routing of FSM3  interrupt event on INT2 {0}
            u16_t INT2_FSM4  : 1;    // [3]    Routing of FSM4  interrupt event on INT2 {0}
            u16_t INT2_FSM5  : 1;    // [4]    Routing of FSM5  interrupt event on INT2 {0}
            u16_t INT2_FSM6  : 1;    // [5]    Routing of FSM6  interrupt event on INT2 {0}
            u16_t INT2_FSM7  : 1;    // [6]    Routing of FSM7  interrupt event on INT2 {0}
            u16_t INT2_FSM8  : 1;    // [7]    Routing of FSM8  interrupt event on INT2 {0}
            u16_t INT2_FSM9  : 1;    // [8]    Routing of FSM9  interrupt event on INT2 {0}
            u16_t INT2_FSM10 : 1;    // [9]    Routing of FSM10 interrupt event on INT2 {0}
            u16_t INT2_FSM11 : 1;    // [10]   Routing of FSM11 interrupt event on INT2 {0}
            u16_t INT2_FSM12 : 1;    // [11]   Routing of FSM12 interrupt event on INT2 {0}
            u16_t INT2_FSM13 : 1;    // [12]   Routing of FSM13 interrupt event on INT2 {0}
            u16_t INT2_FSM14 : 1;    // [13]   Routing of FSM14 interrupt event on INT2 {0}
            u16_t INT2_FSM15 : 1;    // [14]   Routing of FSM15 interrupt event on INT2 {0}
            u16_t INT2_FSM16 : 1;    // [15]   Routing of FSM16 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT2_s;


/// @struct _ism330dhcx_rm_ef__MLC_INT2_s
/// @brief  ISM330DHCX MLC INT2 pin control register [r/w]
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register {0x00}
        struct {
            u8_t INT2_MLC1 : 1;    // [0]   Routing of MLC1 interrupt event on INT2 {0}
            u8_t INT2_MLC2 : 1;    // [1]   Routing of MLC2 interrupt event on INT2 {0}
            u8_t INT2_MLC3 : 1;    // [2]   Routing of MLC3 interrupt event on INT2 {0}
            u8_t INT2_MLC4 : 1;    // [3]   Routing of MLC4 interrupt event on INT2 {0}
            u8_t INT2_MLC5 : 1;    // [4]   Routing of MLC5 interrupt event on INT2 {0}
            u8_t INT2_MLC6 : 1;    // [5]   Routing of MLC6 interrupt event on INT2 {0}
            u8_t INT2_MLC7 : 1;    // [6]   Routing of MLC7 interrupt event on INT2 {0}
            u8_t INT2_MLC8 : 1;    // [7]   Routing of MLC8 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__MLC_INT2_s;


#endif /* __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__ */
