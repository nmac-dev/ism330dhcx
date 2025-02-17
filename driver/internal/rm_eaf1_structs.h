/// @file  internal/rm_eaf1_structs.h
/// @brief ISM330DHCX Internal Structs for Embedded Advanced Features (Page 1) Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_EAF1_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_EAF1_STRUCTS_H__


#include "c-nstd/types.h"


/// NOTE: Embedded advanced features page 1 registers are accessible when PAGE_SEL[3:0] are set to 0001 in PAGE_SEL


/* Finite State Machine (FSM) Configuration Registers */


/// @struct _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_L_s
/// @brief  ISM330DHCX FSM long counter timeout register (LSB) [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_L_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_H_s
/// @brief  ISM330DHCX FSM long counter timeout register (MSB) [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_H_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_s
/// @brief  ISM330DHCX FSM long counter timeout register [r/w] {0x0000}
typedef reg_u16_s _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_PROGRAMS_s
/// @brief  ISM330DHCX FSM number of programs register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_PROGRAMS_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_START_ADD_L_s
/// @brief  ISM330DHCX FSM start address register (LSB) [r/w] {0x00}
/// @note   First available address is 0x033C
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_START_ADD_L_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_START_ADD_H_s
/// @brief  ISM330DHCX FSM start address register (MSB) [r/w] {0x00}
/// @note   First available address is 0x033C
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_START_ADD_H_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_START_ADD_s
/// @brief  ISM330DHCX FSM start address register [r/w] {0x0000}
/// @note   First available address is 0x033C
typedef reg_u16_s _ism330dhcx_rm_eaf1__FSM_START_ADD_s;


#endif /* __ISM330DHCX_INTERNAL__RM_EAF1_STRUCTS_H__ */
