#include "global.h"
#include "rusefi_enums.h"
// was generated automatically by rusEFI tool  from rusefi_enums.h // by enum2string.jar tool on Tue Aug 31 05:42:43 EDT 2021
// see also gen_config_and_enums.bat



const char *getInjectorNonlinearMode(InjectorNonlinearMode value){
switch(value) {
case INJ_None:
  return "INJ_None";
case INJ_PolynomialAdder:
  return "INJ_PolynomialAdder";
  }
 return NULL;
}
const char *getPidAutoTune_AutoTunerState(PidAutoTune_AutoTunerState value){
switch(value) {
case AUTOTUNER_OFF:
  return "AUTOTUNER_OFF";
case CONVERGED:
  return "CONVERGED";
case FAILED:
  return "FAILED";
case RELAY_STEP_DOWN:
  return "RELAY_STEP_DOWN";
case RELAY_STEP_UP:
  return "RELAY_STEP_UP";
case STEADY_STATE_AFTER_STEP_UP:
  return "STEADY_STATE_AFTER_STEP_UP";
case STEADY_STATE_AT_BASELINE:
  return "STEADY_STATE_AT_BASELINE";
  }
 return NULL;
}
const char *getPidAutoTune_Peak(PidAutoTune_Peak value){
switch(value) {
case MAXIMUM:
  return "MAXIMUM";
case MINIMUM:
  return "MINIMUM";
case NOT_A_PEAK:
  return "NOT_A_PEAK";
  }
 return NULL;
}
const char *getAdc_channel_mode_e(adc_channel_mode_e value){
switch(value) {
case ADC_FAST:
  return "ADC_FAST";
case ADC_OFF:
  return "ADC_OFF";
case ADC_SLOW:
  return "ADC_SLOW";
case Force_4_bytes_size_adc_channel_mode:
  return "Force_4_bytes_size_adc_channel_mode";
  }
 return NULL;
}
const char *getAfr_override_e(afr_override_e value){
switch(value) {
case AFR_AccPedal:
  return "AFR_AccPedal";
case AFR_CylFilling:
  return "AFR_CylFilling";
case AFR_MAP:
  return "AFR_MAP";
case AFR_None:
  return "AFR_None";
case AFR_Tps:
  return "AFR_Tps";
  }
 return NULL;
}
const char *getAir_pressure_sensor_type_e(air_pressure_sensor_type_e value){
switch(value) {
case Force_4_bytes_size_cranking_map_type:
  return "Force_4_bytes_size_cranking_map_type";
case MT_BOSCH_2_5:
  return "MT_BOSCH_2_5";
case MT_CUSTOM:
  return "MT_CUSTOM";
case MT_DENSO183:
  return "MT_DENSO183";
case MT_DODGE_NEON_2003:
  return "MT_DODGE_NEON_2003";
case MT_GM_1_BAR:
  return "MT_GM_1_BAR";
case MT_GM_2_BAR:
  return "MT_GM_2_BAR";
case MT_GM_3_BAR:
  return "MT_GM_3_BAR";
case MT_HONDA3BAR:
  return "MT_HONDA3BAR";
case MT_MAZDA_1_BAR:
  return "MT_MAZDA_1_BAR";
case MT_MPX4100:
  return "MT_MPX4100";
case MT_MPX4250:
  return "MT_MPX4250";
case MT_MPX4250A:
  return "MT_MPX4250A";
case MT_SUBY_DENSO:
  return "MT_SUBY_DENSO";
case MT_TOYOTA_89420_02010:
  return "MT_TOYOTA_89420_02010";
  }
 return NULL;
}
const char *getAntiLagActivationMode_e(antiLagActivationMode_e value){
switch(value) {
case ALWAYS_ON_ANTILAG:
  return "ALWAYS_ON_ANTILAG";
case Force_4bytes_size_antiLagActivationMode_e:
  return "Force_4bytes_size_antiLagActivationMode_e";
case SWITCH_INPUT_ANTILAG:
  return "SWITCH_INPUT_ANTILAG";
  }
 return NULL;
}
const char *getBoostType_e(boostType_e value){
switch(value) {
case CLOSED_LOOP:
  return "CLOSED_LOOP";
case Force_4bytes_size_boostType_e:
  return "Force_4bytes_size_boostType_e";
case OPEN_LOOP:
  return "OPEN_LOOP";
  }
 return NULL;
}
const char *getCan_baudrate_e(can_baudrate_e value){
switch(value) {
case B100KBPS:
  return "B100KBPS";
case B1MBPS:
  return "B1MBPS";
case B250KBPS:
  return "B250KBPS";
case B500KBPS:
  return "B500KBPS";
  }
 return NULL;
}
const char *getCan_nbc_e(can_nbc_e value){
switch(value) {
case CAN_BUS_BMW_E90:
  return "CAN_BUS_BMW_E90";
case CAN_BUS_GENESIS_COUPE:
  return "CAN_BUS_GENESIS_COUPE";
case CAN_BUS_HONDA_K:
  return "CAN_BUS_HONDA_K";
case CAN_BUS_Haltech:
  return "CAN_BUS_Haltech";
case CAN_BUS_MAZDA_RX8:
  return "CAN_BUS_MAZDA_RX8";
case CAN_BUS_MQB:
  return "CAN_BUS_MQB";
case CAN_BUS_NBC_BMW:
  return "CAN_BUS_NBC_BMW";
case CAN_BUS_NBC_FIAT:
  return "CAN_BUS_NBC_FIAT";
case CAN_BUS_NBC_NONE:
  return "CAN_BUS_NBC_NONE";
case CAN_BUS_NBC_VAG:
  return "CAN_BUS_NBC_VAG";
case CAN_BUS_NISSAN_VQ:
  return "CAN_BUS_NISSAN_VQ";
case CAN_BUS_W202_C180:
  return "CAN_BUS_W202_C180";
case Internal_ForceMyEnumIntSize_can_nbc:
  return "Internal_ForceMyEnumIntSize_can_nbc";
  }
 return NULL;
}
const char *getCan_vss_nbc_e(can_vss_nbc_e value){
switch(value) {
case BMW_e46:
  return "BMW_e46";
case Force_4_bytes_size_can_vss_nbc_e:
  return "Force_4_bytes_size_can_vss_nbc_e";
case W202:
  return "W202";
  }
 return NULL;
}
const char *getChamber_style_e(chamber_style_e value){
switch(value) {
case CS_CLOSED:
  return "CS_CLOSED";
case CS_OPEN:
  return "CS_OPEN";
case CS_SWIRL_TUMBLE:
  return "CS_SWIRL_TUMBLE";
case Internal_ForceMyEnumIntSize_chamber_stype:
  return "Internal_ForceMyEnumIntSize_chamber_stype";
  }
 return NULL;
}
const char *getCranking_ignition_mode_e(cranking_ignition_mode_e value){
switch(value) {
case CIM_DEFAULT:
  return "CIM_DEFAULT";
case CIM_FIXED_ANGLE:
  return "CIM_FIXED_ANGLE";
case Force_4_bytes_size_cranking_ignition_mode:
  return "Force_4_bytes_size_cranking_ignition_mode";
  }
 return NULL;
}
const char *getDebug_mode_e(debug_mode_e value){
switch(value) {
case DBG_16:
  return "DBG_16";
case DBG_34:
  return "DBG_34";
case DBG_ALTERNATOR_PID:
  return "DBG_ALTERNATOR_PID";
case DBG_ANALOG_INPUTS:
  return "DBG_ANALOG_INPUTS";
case DBG_ANALOG_INPUTS2:
  return "DBG_ANALOG_INPUTS2";
case DBG_AUX_VALVES:
  return "DBG_AUX_VALVES";
case DBG_BENCH_TEST:
  return "DBG_BENCH_TEST";
case DBG_BOOST:
  return "DBG_BOOST";
case DBG_CAN:
  return "DBG_CAN";
case DBG_CJ125:
  return "DBG_CJ125";
case DBG_COMPOSITE_LOG:
  return "DBG_COMPOSITE_LOG";
case DBG_CRANKING_DETAILS:
  return "DBG_CRANKING_DETAILS";
case DBG_DWELL_METRIC:
  return "DBG_DWELL_METRIC";
case DBG_DYNO_VIEW:
  return "DBG_DYNO_VIEW";
case DBG_ELECTRONIC_THROTTLE_EXTRA:
  return "DBG_ELECTRONIC_THROTTLE_EXTRA";
case DBG_ELECTRONIC_THROTTLE_PID:
  return "DBG_ELECTRONIC_THROTTLE_PID";
case DBG_EL_ACCEL:
  return "DBG_EL_ACCEL";
case DBG_ETB_AUTOTUNE:
  return "DBG_ETB_AUTOTUNE";
case DBG_ETB_LOGIC:
  return "DBG_ETB_LOGIC";
case DBG_EXECUTOR:
  return "DBG_EXECUTOR";
case DBG_FSIO_ADC:
  return "DBG_FSIO_ADC";
case DBG_FSIO_EXPRESSION_1_7:
  return "DBG_FSIO_EXPRESSION_1_7";
case DBG_FSIO_EXPRESSION_8_14:
  return "DBG_FSIO_EXPRESSION_8_14";
case DBG_FUEL_PID_CORRECTION:
  return "DBG_FUEL_PID_CORRECTION";
case DBG_GPPWM:
  return "DBG_GPPWM";
case DBG_IDLE_CONTROL:
  return "DBG_IDLE_CONTROL";
case DBG_IGNITION_TIMING:
  return "DBG_IGNITION_TIMING";
case DBG_INJECTOR_COMPENSATION:
  return "DBG_INJECTOR_COMPENSATION";
case DBG_INSTANT_RPM:
  return "DBG_INSTANT_RPM";
case DBG_ION:
  return "DBG_ION";
case DBG_KNOCK:
  return "DBG_KNOCK";
case DBG_LAUNCH:
  return "DBG_LAUNCH";
case DBG_LOGIC_ANALYZER:
  return "DBG_LOGIC_ANALYZER";
case DBG_LUA:
  return "DBG_LUA";
case DBG_MAP:
  return "DBG_MAP";
case DBG_METRICS:
  return "DBG_METRICS";
case DBG_RUSEFI_WIDEBAND:
  return "DBG_RUSEFI_WIDEBAND";
case DBG_SD_CARD:
  return "DBG_SD_CARD";
case DBG_SR5_PROTOCOL:
  return "DBG_SR5_PROTOCOL";
case DBG_START_STOP:
  return "DBG_START_STOP";
case DBG_STATUS:
  return "DBG_STATUS";
case DBG_TCU:
  return "DBG_TCU";
case DBG_TLE8888:
  return "DBG_TLE8888";
case DBG_TPS_ACCEL:
  return "DBG_TPS_ACCEL";
case DBG_TRIGGER_COUNTERS:
  return "DBG_TRIGGER_COUNTERS";
case DBG_UNUSED_42:
  return "DBG_UNUSED_42";
case DBG_VEHICLE_SPEED_SENSOR:
  return "DBG_VEHICLE_SPEED_SENSOR";
case DBG_VVT:
  return "DBG_VVT";
case DBG_VVT_1_PID:
  return "DBG_VVT_1_PID";
case DBG_VVT_2_PID:
  return "DBG_VVT_2_PID";
case DBG_VVT_3_PID:
  return "DBG_VVT_3_PID";
case DBG_VVT_4_PID:
  return "DBG_VVT_4_PID";
case Force_4_bytes_size_debug_mode_e:
  return "Force_4_bytes_size_debug_mode_e";
case MODE_52:
  return "MODE_52";
case MODE_53:
  return "MODE_53";
  }
 return NULL;
}
const char *getDisplay_mode_e(display_mode_e value){
switch(value) {
case DM_HD44780:
  return "DM_HD44780";
case DM_HD44780_OVER_PCF8574:
  return "DM_HD44780_OVER_PCF8574";
case DM_NONE:
  return "DM_NONE";
case Force_4_bytes_size_display_mode:
  return "Force_4_bytes_size_display_mode";
  }
 return NULL;
}
const char *getEgo_sensor_e(ego_sensor_e value){
switch(value) {
case ES_14Point7_Free:
  return "ES_14Point7_Free";
case ES_AEM:
  return "ES_AEM";
case ES_BPSX_D1:
  return "ES_BPSX_D1";
case ES_Custom:
  return "ES_Custom";
case ES_Innovate_MTX_L:
  return "ES_Innovate_MTX_L";
case ES_NarrowBand:
  return "ES_NarrowBand";
case ES_PLX:
  return "ES_PLX";
case Force_4_bytes_size_ego_sensor:
  return "Force_4_bytes_size_ego_sensor";
  }
 return NULL;
}
const char *getEngine_load_mode_e(engine_load_mode_e value){
switch(value) {
case Force_4_bytes_size_engine_load_mode:
  return "Force_4_bytes_size_engine_load_mode";
case LM_ALPHA_N:
  return "LM_ALPHA_N";
case LM_LUA:
  return "LM_LUA";
case LM_MOCK:
  return "LM_MOCK";
case LM_REAL_MAF:
  return "LM_REAL_MAF";
case LM_SPEED_DENSITY:
  return "LM_SPEED_DENSITY";
  }
 return NULL;
}
const char *getEngine_type_e(engine_type_e value){
switch(value) {
case BMW_M73_F:
  return "BMW_M73_F";
case BMW_M73_M:
  return "BMW_M73_M";
case BMW_M73_MRE:
  return "BMW_M73_MRE";
case BMW_M73_MRE_SLAVE:
  return "BMW_M73_MRE_SLAVE";
case BMW_M73_PROTEUS:
  return "BMW_M73_PROTEUS";
case CAMARO_4:
  return "CAMARO_4";
case CITROEN_TU3JP:
  return "CITROEN_TU3JP";
case DEFAULT_FRANKENSO:
  return "DEFAULT_FRANKENSO";
case DODGE_NEON_1995:
  return "DODGE_NEON_1995";
case DODGE_NEON_2003_CRANK:
  return "DODGE_NEON_2003_CRANK";
case DODGE_RAM:
  return "DODGE_RAM";
case ETB_BENCH_ENGINE:
  return "ETB_BENCH_ENGINE";
case FORD_ASPIRE_1996:
  return "FORD_ASPIRE_1996";
case FORD_ESCORT_GT:
  return "FORD_ESCORT_GT";
case FORD_INLINE_6_1995:
  return "FORD_INLINE_6_1995";
case FRANKENSO_QA_ENGINE:
  return "FRANKENSO_QA_ENGINE";
case Force_4_bytes_size_engine_type:
  return "Force_4_bytes_size_engine_type";
case GY6_139QMB:
  return "GY6_139QMB";
case HELLEN72_ETB:
  return "HELLEN72_ETB";
case HELLEN_121_NISSAN_4_CYL:
  return "HELLEN_121_NISSAN_4_CYL";
case HELLEN_121_NISSAN_6_CYL:
  return "HELLEN_121_NISSAN_6_CYL";
case HELLEN_121_VAG:
  return "HELLEN_121_VAG";
case HELLEN_121_VAG_5_CYL:
  return "HELLEN_121_VAG_5_CYL";
case HELLEN_121_VAG_8_CYL:
  return "HELLEN_121_VAG_8_CYL";
case HELLEN_121_VAG_V6_CYL:
  return "HELLEN_121_VAG_V6_CYL";
case HELLEN_121_VAG_VR6_CYL:
  return "HELLEN_121_VAG_VR6_CYL";
case HELLEN_128_MERCEDES:
  return "HELLEN_128_MERCEDES";
case HELLEN_134_BMW:
  return "HELLEN_134_BMW";
case HELLEN_154_HYUNDAI:
  return "HELLEN_154_HYUNDAI";
case HELLEN_154_VAG:
  return "HELLEN_154_VAG";
case HELLEN_55_BMW:
  return "HELLEN_55_BMW";
case HELLEN_88_BMW:
  return "HELLEN_88_BMW";
case HELLEN_NA6:
  return "HELLEN_NA6";
case HELLEN_NA94:
  return "HELLEN_NA94";
case HELLEN_NB2:
  return "HELLEN_NB2";
case HELLEN_NB2_36:
  return "HELLEN_NB2_36";
case HONDA_600:
  return "HONDA_600";
case HONDA_ACCORD_1_24_SHIFTED:
  return "HONDA_ACCORD_1_24_SHIFTED";
case HONDA_ACCORD_CD:
  return "HONDA_ACCORD_CD";
case HONDA_ACCORD_CD_DIP:
  return "HONDA_ACCORD_CD_DIP";
case HONDA_ACCORD_CD_TWO_WIRES:
  return "HONDA_ACCORD_CD_TWO_WIRES";
case LADA_KALINA:
  return "LADA_KALINA";
case MAZDA_626:
  return "MAZDA_626";
case MAZDA_MIATA_2003:
  return "MAZDA_MIATA_2003";
case MAZDA_MIATA_2003_BOARD_TEST:
  return "MAZDA_MIATA_2003_BOARD_TEST";
case MAZDA_MIATA_2003_NA_RAIL:
  return "MAZDA_MIATA_2003_NA_RAIL";
case MAZDA_MIATA_NA8:
  return "MAZDA_MIATA_NA8";
case MAZDA_MIATA_NB1:
  return "MAZDA_MIATA_NB1";
case MIATA_1990:
  return "MIATA_1990";
case MIATA_1996:
  return "MIATA_1996";
case MIATA_NA6_MAP:
  return "MIATA_NA6_MAP";
case MIATA_NA6_VAF:
  return "MIATA_NA6_VAF";
case MIATA_PROTEUS_TCU:
  return "MIATA_PROTEUS_TCU";
case MICRO_RUS_EFI:
  return "MICRO_RUS_EFI";
case MINIMAL_PINS:
  return "MINIMAL_PINS";
case MITSU_4G93:
  return "MITSU_4G93";
case MRE_BOARD_NEW_TEST:
  return "MRE_BOARD_NEW_TEST";
case MRE_BOARD_OLD_TEST:
  return "MRE_BOARD_OLD_TEST";
case MRE_BODY_CONTROL:
  return "MRE_BODY_CONTROL";
case MRE_M111:
  return "MRE_M111";
case MRE_MIATA_94_MAP:
  return "MRE_MIATA_94_MAP";
case MRE_MIATA_NA6_MAP:
  return "MRE_MIATA_NA6_MAP";
case MRE_MIATA_NA6_VAF:
  return "MRE_MIATA_NA6_VAF";
case MRE_MIATA_NB2_ETB:
  return "MRE_MIATA_NB2_ETB";
case MRE_MIATA_NB2_MAF:
  return "MRE_MIATA_NB2_MAF";
case MRE_MIATA_NB2_MAP:
  return "MRE_MIATA_NB2_MAP";
case MRE_SUBARU_EJ18:
  return "MRE_SUBARU_EJ18";
case NISSAN_PRIMERA:
  return "NISSAN_PRIMERA";
case PROMETHEUS_DEFAULTS:
  return "PROMETHEUS_DEFAULTS";
case PROTEUS_ANALOG_PWM_TEST:
  return "PROTEUS_ANALOG_PWM_TEST";
case PROTEUS_DEFAULTS:
  return "PROTEUS_DEFAULTS";
case PROTEUS_MIATA_NB2:
  return "PROTEUS_MIATA_NB2";
case PROTEUS_QC_TEST_BOARD:
  return "PROTEUS_QC_TEST_BOARD";
case SACHS:
  return "SACHS";
case SUBARUEG33_DEFAULTS:
  return "SUBARUEG33_DEFAULTS";
case SUBARUEJ20G_DEFAULTS:
  return "SUBARUEJ20G_DEFAULTS";
case SUBARU_2003_WRX:
  return "SUBARU_2003_WRX";
case TEST_33816:
  return "TEST_33816";
case TEST_CIVIC_4_0_BOTH:
  return "TEST_CIVIC_4_0_BOTH";
case TEST_CIVIC_4_0_RISE:
  return "TEST_CIVIC_4_0_RISE";
case TEST_ENGINE:
  return "TEST_ENGINE";
case TEST_ENGINE_VVT:
  return "TEST_ENGINE_VVT";
case TEST_ISSUE_366_BOTH:
  return "TEST_ISSUE_366_BOTH";
case TEST_ISSUE_366_RISE:
  return "TEST_ISSUE_366_RISE";
case TEST_ISSUE_898:
  return "TEST_ISSUE_898";
case TEST_ROTARY:
  return "TEST_ROTARY";
case TLE8888_BENCH_ENGINE:
  return "TLE8888_BENCH_ENGINE";
case TOYOTA_2JZ_GTE_VVTi:
  return "TOYOTA_2JZ_GTE_VVTi";
case TOYOTA_JZS147:
  return "TOYOTA_JZS147";
case VAG_18_TURBO:
  return "VAG_18_TURBO";
case VW_ABA:
  return "VW_ABA";
case VW_B6:
  return "VW_B6";
  }
 return NULL;
}
const char *getEtb_function_e(etb_function_e value){
switch(value) {
case ETB_IdleValve:
  return "ETB_IdleValve";
case ETB_None:
  return "ETB_None";
case ETB_Throttle1:
  return "ETB_Throttle1";
case ETB_Throttle2:
  return "ETB_Throttle2";
case ETB_Wastegate:
  return "ETB_Wastegate";
  }
 return NULL;
}
const char *getGear_e(gear_e value){
switch(value) {
case GEAR_1:
  return "GEAR_1";
case GEAR_2:
  return "GEAR_2";
case GEAR_3:
  return "GEAR_3";
case GEAR_4:
  return "GEAR_4";
case NEUTRAL:
  return "NEUTRAL";
case REVERSE:
  return "REVERSE";
  }
 return NULL;
}
const char *getGppwm_channel_e(gppwm_channel_e value){
switch(value) {
case GPPWM_AccelPedal:
  return "GPPWM_AccelPedal";
case GPPWM_AuxTemp1:
  return "GPPWM_AuxTemp1";
case GPPWM_AuxTemp2:
  return "GPPWM_AuxTemp2";
case GPPWM_Clt:
  return "GPPWM_Clt";
case GPPWM_FuelLoad:
  return "GPPWM_FuelLoad";
case GPPWM_Iat:
  return "GPPWM_Iat";
case GPPWM_IgnLoad:
  return "GPPWM_IgnLoad";
case GPPWM_Map:
  return "GPPWM_Map";
case GPPWM_Tps:
  return "GPPWM_Tps";
case GPPWM_Vbatt:
  return "GPPWM_Vbatt";
case GPPWM_Zero:
  return "GPPWM_Zero";
  }
 return NULL;
}
const char *getGppwm_compare_mode_e(gppwm_compare_mode_e value){
switch(value) {
case GPPWM_GreaterThan:
  return "GPPWM_GreaterThan";
case GPPWM_LessThan:
  return "GPPWM_LessThan";
  }
 return NULL;
}
const char *getIdle_mode_e(idle_mode_e value){
switch(value) {
case Force_4_bytes_size_idle_mode:
  return "Force_4_bytes_size_idle_mode";
case IM_AUTO:
  return "IM_AUTO";
case IM_MANUAL:
  return "IM_MANUAL";
  }
 return NULL;
}
const char *getIdle_state_e(idle_state_e value){
switch(value) {
case BLIP:
  return "BLIP";
case Force_4bytes_size_idle_state_e:
  return "Force_4bytes_size_idle_state_e";
case INIT:
  return "INIT";
case PID_UPPER:
  return "PID_UPPER";
case PID_VALUE:
  return "PID_VALUE";
case RPM_DEAD_ZONE:
  return "RPM_DEAD_ZONE";
case TPS_THRESHOLD:
  return "TPS_THRESHOLD";
  }
 return NULL;
}
const char *getIgnition_mode_e(ignition_mode_e value){
switch(value) {
case Force_4_bytes_size_ignition_mode:
  return "Force_4_bytes_size_ignition_mode";
case IM_INDIVIDUAL_COILS:
  return "IM_INDIVIDUAL_COILS";
case IM_ONE_COIL:
  return "IM_ONE_COIL";
case IM_TWO_COILS:
  return "IM_TWO_COILS";
case IM_WASTED_SPARK:
  return "IM_WASTED_SPARK";
  }
 return NULL;
}
const char *getInjection_mode_e(injection_mode_e value){
switch(value) {
case Force_4_bytes_size_injection_mode:
  return "Force_4_bytes_size_injection_mode";
case IM_BATCH:
  return "IM_BATCH";
case IM_SEQUENTIAL:
  return "IM_SEQUENTIAL";
case IM_SIMULTANEOUS:
  return "IM_SIMULTANEOUS";
case IM_SINGLE_POINT:
  return "IM_SINGLE_POINT";
  }
 return NULL;
}
const char *getInjector_compensation_mode_e(injector_compensation_mode_e value){
switch(value) {
case ICM_FixedRailPressure:
  return "ICM_FixedRailPressure";
case ICM_None:
  return "ICM_None";
case ICM_SensedRailPressure:
  return "ICM_SensedRailPressure";
  }
 return NULL;
}
const char *getInjector_pressure_type_e(injector_pressure_type_e value){
switch(value) {
case IPT_High:
  return "IPT_High";
case IPT_Low:
  return "IPT_Low";
  }
 return NULL;
}
const char *getLaunchActivationMode_e(launchActivationMode_e value){
switch(value) {
case ALWAYS_ACTIVE_LAUNCH:
  return "ALWAYS_ACTIVE_LAUNCH";
case CLUTCH_INPUT_LAUNCH:
  return "CLUTCH_INPUT_LAUNCH";
case Force_4bytes_size_launchActivationMode_e:
  return "Force_4bytes_size_launchActivationMode_e";
case SWITCH_INPUT_LAUNCH:
  return "SWITCH_INPUT_LAUNCH";
  }
 return NULL;
}
const char *getLog_format_e(log_format_e value){
switch(value) {
case Force_4_bytes_size_log_format:
  return "Force_4_bytes_size_log_format";
case LF_NATIVE:
  return "LF_NATIVE";
case LM_MLV:
  return "LM_MLV";
  }
 return NULL;
}
const char *getMaf_sensor_type_e(maf_sensor_type_e value){
switch(value) {
case Bosch0280218004:
  return "Bosch0280218004";
case Bosch0280218037:
  return "Bosch0280218037";
case CUSTOM:
  return "CUSTOM";
case DensoTODO:
  return "DensoTODO";
case Internal_ForceMyEnumIntSize_maf_sensor:
  return "Internal_ForceMyEnumIntSize_maf_sensor";
  }
 return NULL;
}
const char *getOperation_mode_e(operation_mode_e value){
switch(value) {
case FOUR_STROKE_CAM_SENSOR:
  return "FOUR_STROKE_CAM_SENSOR";
case FOUR_STROKE_CRANK_SENSOR:
  return "FOUR_STROKE_CRANK_SENSOR";
case FOUR_STROKE_SYMMETRICAL_CRANK_SENSOR:
  return "FOUR_STROKE_SYMMETRICAL_CRANK_SENSOR";
case FOUR_STROKE_THREE_TIMES_CRANK_SENSOR:
  return "FOUR_STROKE_THREE_TIMES_CRANK_SENSOR";
case Force_4_bytes_size_operation_mode_e:
  return "Force_4_bytes_size_operation_mode_e";
case OM_NONE:
  return "OM_NONE";
case TWO_STROKE:
  return "TWO_STROKE";
  }
 return NULL;
}
const char *getPin_input_mode_e(pin_input_mode_e value){
switch(value) {
case PI_DEFAULT:
  return "PI_DEFAULT";
case PI_PULLDOWN:
  return "PI_PULLDOWN";
case PI_PULLUP:
  return "PI_PULLUP";
  }
 return NULL;
}
const char *getPin_output_mode_e(pin_output_mode_e value){
switch(value) {
case OM_DEFAULT:
  return "OM_DEFAULT";
case OM_INVERTED:
  return "OM_INVERTED";
case OM_OPENDRAIN:
  return "OM_OPENDRAIN";
case OM_OPENDRAIN_INVERTED:
  return "OM_OPENDRAIN_INVERTED";
  }
 return NULL;
}
const char *getSensor_chart_e(sensor_chart_e value){
switch(value) {
case Internal_ForceMyEnumIntSize_sensor_chart:
  return "Internal_ForceMyEnumIntSize_sensor_chart";
case SC_AUX_FAST1:
  return "SC_AUX_FAST1";
case SC_DETAILED_RPM:
  return "SC_DETAILED_RPM";
case SC_MAP:
  return "SC_MAP";
case SC_OFF:
  return "SC_OFF";
case SC_RPM_ACCEL:
  return "SC_RPM_ACCEL";
case SC_TRIGGER:
  return "SC_TRIGGER";
  }
 return NULL;
}
const char *getSpi_device_e(spi_device_e value){
switch(value) {
case SPI_DEVICE_1:
  return "SPI_DEVICE_1";
case SPI_DEVICE_2:
  return "SPI_DEVICE_2";
case SPI_DEVICE_3:
  return "SPI_DEVICE_3";
case SPI_DEVICE_4:
  return "SPI_DEVICE_4";
case SPI_NONE:
  return "SPI_NONE";
  }
 return NULL;
}
const char *getSpi_speed_e(spi_speed_e value){
switch(value) {
case _150KHz:
  return "_150KHz";
case _1_25MHz:
  return "_1_25MHz";
case _2_5MHz:
  return "_2_5MHz";
case _5MHz:
  return "_5MHz";
  }
 return NULL;
}
const char *getTChargeMode_e(tChargeMode_e value){
switch(value) {
case Force_4bytes_size_tChargeMode_e:
  return "Force_4bytes_size_tChargeMode_e";
case TCHARGE_MODE_AIR_INTERP:
  return "TCHARGE_MODE_AIR_INTERP";
case TCHARGE_MODE_RPM_TPS:
  return "TCHARGE_MODE_RPM_TPS";
  }
 return NULL;
}
const char *getTiming_mode_e(timing_mode_e value){
switch(value) {
case Internal_ForceMyEnumIntSize_timing_mode:
  return "Internal_ForceMyEnumIntSize_timing_mode";
case TM_DYNAMIC:
  return "TM_DYNAMIC";
case TM_FIXED:
  return "TM_FIXED";
  }
 return NULL;
}
const char *getTle8888_mode_e(tle8888_mode_e value){
switch(value) {
case TL_AUTO:
  return "TL_AUTO";
case TL_HALL:
  return "TL_HALL";
case TL_MANUAL:
  return "TL_MANUAL";
case TL_SEMI_AUTO:
  return "TL_SEMI_AUTO";
  }
 return NULL;
}
const char *getTrigger_event_e(trigger_event_e value){
switch(value) {
case SHAFT_3RD_FALLING:
  return "SHAFT_3RD_FALLING";
case SHAFT_3RD_RISING:
  return "SHAFT_3RD_RISING";
case SHAFT_PRIMARY_FALLING:
  return "SHAFT_PRIMARY_FALLING";
case SHAFT_PRIMARY_RISING:
  return "SHAFT_PRIMARY_RISING";
case SHAFT_SECONDARY_FALLING:
  return "SHAFT_SECONDARY_FALLING";
case SHAFT_SECONDARY_RISING:
  return "SHAFT_SECONDARY_RISING";
  }
 return NULL;
}
const char *getTrigger_type_e(trigger_type_e value){
switch(value) {
case Force_4_bytes_size_trigger_type:
  return "Force_4_bytes_size_trigger_type";
case TT_1_16:
  return "TT_1_16";
case TT_2JZ_1_12:
  return "TT_2JZ_1_12";
case TT_2JZ_3_34:
  return "TT_2JZ_3_34";
case TT_36_2_2_2:
  return "TT_36_2_2_2";
case TT_3_1_CAM:
  return "TT_3_1_CAM";
case TT_52:
  return "TT_52";
case TT_60_2_VW:
  return "TT_60_2_VW";
case TT_CHRYSLER_NGC_36_2_2:
  return "TT_CHRYSLER_NGC_36_2_2";
case TT_DAIHATSU:
  return "TT_DAIHATSU";
case TT_DODGE_NEON_1995:
  return "TT_DODGE_NEON_1995";
case TT_DODGE_NEON_1995_ONLY_CRANK:
  return "TT_DODGE_NEON_1995_ONLY_CRANK";
case TT_DODGE_NEON_2003_CAM:
  return "TT_DODGE_NEON_2003_CAM";
case TT_DODGE_NEON_2003_CRANK:
  return "TT_DODGE_NEON_2003_CRANK";
case TT_DODGE_RAM:
  return "TT_DODGE_RAM";
case TT_DODGE_STRATUS:
  return "TT_DODGE_STRATUS";
case TT_FIAT_IAW_P8:
  return "TT_FIAT_IAW_P8";
case TT_FORD_ASPIRE:
  return "TT_FORD_ASPIRE";
case TT_FORD_ST170:
  return "TT_FORD_ST170";
case TT_GM_60_2_2_2:
  return "TT_GM_60_2_2_2";
case TT_GM_7X:
  return "TT_GM_7X";
case TT_GM_LS_24:
  return "TT_GM_LS_24";
case TT_HONDA_1_24:
  return "TT_HONDA_1_24";
case TT_HONDA_1_4_24:
  return "TT_HONDA_1_4_24";
case TT_HONDA_4_24:
  return "TT_HONDA_4_24";
case TT_HONDA_4_24_1:
  return "TT_HONDA_4_24_1";
case TT_HONDA_ACCORD_1_24_SHIFTED:
  return "TT_HONDA_ACCORD_1_24_SHIFTED";
case TT_HONDA_CBR_600:
  return "TT_HONDA_CBR_600";
case TT_HONDA_K_12_1:
  return "TT_HONDA_K_12_1";
case TT_JEEP_18_2_2_2:
  return "TT_JEEP_18_2_2_2";
case TT_JEEP_4_CYL:
  return "TT_JEEP_4_CYL";
case TT_KAWA_KX450F:
  return "TT_KAWA_KX450F";
case TT_MAZDA_DOHC_1_4:
  return "TT_MAZDA_DOHC_1_4";
case TT_MAZDA_MIATA_NA:
  return "TT_MAZDA_MIATA_NA";
case TT_MAZDA_MIATA_NB1:
  return "TT_MAZDA_MIATA_NB1";
case TT_MAZDA_MIATA_VVT_TEST:
  return "TT_MAZDA_MIATA_VVT_TEST";
case TT_MAZDA_SOHC_4:
  return "TT_MAZDA_SOHC_4";
case TT_MIATA_VVT:
  return "TT_MIATA_VVT";
case TT_MITSUBISHI:
  return "TT_MITSUBISHI";
case TT_NISSAN_QR25:
  return "TT_NISSAN_QR25";
case TT_NISSAN_SR20VE:
  return "TT_NISSAN_SR20VE";
case TT_NISSAN_SR20VE_360:
  return "TT_NISSAN_SR20VE_360";
case TT_NISSAN_VQ30:
  return "TT_NISSAN_VQ30";
case TT_NISSAN_VQ35:
  return "TT_NISSAN_VQ35";
case TT_ONE:
  return "TT_ONE";
case TT_ONE_PLUS_ONE:
  return "TT_ONE_PLUS_ONE";
case TT_RENIX_44_2_2:
  return "TT_RENIX_44_2_2";
case TT_RENIX_66_2_2_2:
  return "TT_RENIX_66_2_2_2";
case TT_ROVER_K:
  return "TT_ROVER_K";
case TT_SKODA_FAVORIT:
  return "TT_SKODA_FAVORIT";
case TT_SUBARU_7_6:
  return "TT_SUBARU_7_6";
case TT_SUBARU_7_WITHOUT_6:
  return "TT_SUBARU_7_WITHOUT_6";
case TT_SUBARU_SVX:
  return "TT_SUBARU_SVX";
case TT_SUBARU_SVX_CAM_VVT:
  return "TT_SUBARU_SVX_CAM_VVT";
case TT_SUBARU_SVX_CRANK_1:
  return "TT_SUBARU_SVX_CRANK_1";
case TT_TEMP_62:
  return "TT_TEMP_62";
case TT_TOOTHED_WHEEL:
  return "TT_TOOTHED_WHEEL";
case TT_TOOTHED_WHEEL_36_1:
  return "TT_TOOTHED_WHEEL_36_1";
case TT_TOOTHED_WHEEL_36_2:
  return "TT_TOOTHED_WHEEL_36_2";
case TT_TOOTHED_WHEEL_60_2:
  return "TT_TOOTHED_WHEEL_60_2";
case TT_TRI_TACH:
  return "TT_TRI_TACH";
case TT_UNUSED:
  return "TT_UNUSED";
case TT_VVT_BARRA_3_PLUS_1:
  return "TT_VVT_BARRA_3_PLUS_1";
case TT_VVT_BOSCH_QUICK_START:
  return "TT_VVT_BOSCH_QUICK_START";
case TT_VVT_JZ:
  return "TT_VVT_JZ";
case TT_VVT_MIATA_NB2:
  return "TT_VVT_MIATA_NB2";
case TT_VVT_NISSAN_VQ35:
  return "TT_VVT_NISSAN_VQ35";
  }
 return NULL;
}
const char *getTrigger_value_e(trigger_value_e value){
switch(value) {
case TV_FALL:
  return "TV_FALL";
case TV_RISE:
  return "TV_RISE";
  }
 return NULL;
}
const char *getTrigger_wheel_e(trigger_wheel_e value){
switch(value) {
case T_CHANNEL_3:
  return "T_CHANNEL_3";
case T_NONE:
  return "T_NONE";
case T_PRIMARY:
  return "T_PRIMARY";
case T_SECONDARY:
  return "T_SECONDARY";
  }
 return NULL;
}
const char *getUart_device_e(uart_device_e value){
switch(value) {
case UART_DEVICE_1:
  return "UART_DEVICE_1";
case UART_DEVICE_2:
  return "UART_DEVICE_2";
case UART_DEVICE_3:
  return "UART_DEVICE_3";
case UART_DEVICE_4:
  return "UART_DEVICE_4";
case UART_NONE:
  return "UART_NONE";
  }
 return NULL;
}
const char *getVe_override_e(ve_override_e value){
switch(value) {
case VE_MAP:
  return "VE_MAP";
case VE_None:
  return "VE_None";
case VE_TPS:
  return "VE_TPS";
  }
 return NULL;
}
const char *getVvt_mode_e(vvt_mode_e value){
switch(value) {
case VVT_2JZ:
  return "VVT_2JZ";
case VVT_4_1:
  return "VVT_4_1";
case VVT_BARRA_3_PLUS_1:
  return "VVT_BARRA_3_PLUS_1";
case VVT_BOSCH_QUICK_START:
  return "VVT_BOSCH_QUICK_START";
case VVT_FIRST_HALF:
  return "VVT_FIRST_HALF";
case VVT_FORD_ST170:
  return "VVT_FORD_ST170";
case VVT_INACTIVE:
  return "VVT_INACTIVE";
case VVT_MIATA_NB2:
  return "VVT_MIATA_NB2";
case VVT_NISSAN_VQ:
  return "VVT_NISSAN_VQ";
case VVT_SECOND_HALF:
  return "VVT_SECOND_HALF";
  }
 return NULL;
}
