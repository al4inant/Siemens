/* localelist.h - Macros for iterating over all locales.
 * Copyright (C) 2003  IAR Systems.  All rights reserved.
 *
 * Do not edit; this file was automatically generated by 'locparse'.
 */

#ifndef _LOCALELIST_H
#define _LOCALELIST_H

#ifndef _SYSTEM_BUILD
  #pragma system_include
#endif

#ifdef _LOCALE_USE_POSIX
#define _LOCALE_LIST0_1     _LOCALE_LIST0_0     _LOCALE_LIST_HELPER(Posix)
#define _LOCALE_LIST1_1(a1) _LOCALE_LIST1_0(a1) _LOCALE_LIST_HELPER1(Posix,a1)
#else
#define _LOCALE_LIST0_1     _LOCALE_LIST0_0
#define _LOCALE_LIST1_1(a1) _LOCALE_LIST1_0(a1)
#endif


#ifdef _LOCALE_USE_CS_CZ
#define _LOCALE_LIST0_2     _LOCALE_LIST0_1     _LOCALE_LIST_HELPER(CsCz)
#define _LOCALE_LIST1_2(a1) _LOCALE_LIST1_1(a1) _LOCALE_LIST_HELPER1(CsCz,a1)
#else
#define _LOCALE_LIST0_2     _LOCALE_LIST0_1
#define _LOCALE_LIST1_2(a1) _LOCALE_LIST1_1(a1)
#endif


#ifdef _LOCALE_USE_DA_DK
#define _LOCALE_LIST0_3     _LOCALE_LIST0_2     _LOCALE_LIST_HELPER(DaDk)
#define _LOCALE_LIST1_3(a1) _LOCALE_LIST1_2(a1) _LOCALE_LIST_HELPER1(DaDk,a1)
#else
#define _LOCALE_LIST0_3     _LOCALE_LIST0_2
#define _LOCALE_LIST1_3(a1) _LOCALE_LIST1_2(a1)
#endif


#ifdef _LOCALE_USE_DA_EU
#define _LOCALE_LIST0_4     _LOCALE_LIST0_3     _LOCALE_LIST_HELPER(DaEu)
#define _LOCALE_LIST1_4(a1) _LOCALE_LIST1_3(a1) _LOCALE_LIST_HELPER1(DaEu,a1)
#else
#define _LOCALE_LIST0_4     _LOCALE_LIST0_3
#define _LOCALE_LIST1_4(a1) _LOCALE_LIST1_3(a1)
#endif


#ifdef _LOCALE_USE_DE_AT
#define _LOCALE_LIST0_5     _LOCALE_LIST0_4     _LOCALE_LIST_HELPER(DeAt)
#define _LOCALE_LIST1_5(a1) _LOCALE_LIST1_4(a1) _LOCALE_LIST_HELPER1(DeAt,a1)
#else
#define _LOCALE_LIST0_5     _LOCALE_LIST0_4
#define _LOCALE_LIST1_5(a1) _LOCALE_LIST1_4(a1)
#endif


#ifdef _LOCALE_USE_DE_BE
#define _LOCALE_LIST0_6     _LOCALE_LIST0_5     _LOCALE_LIST_HELPER(DeBe)
#define _LOCALE_LIST1_6(a1) _LOCALE_LIST1_5(a1) _LOCALE_LIST_HELPER1(DeBe,a1)
#else
#define _LOCALE_LIST0_6     _LOCALE_LIST0_5
#define _LOCALE_LIST1_6(a1) _LOCALE_LIST1_5(a1)
#endif


#ifdef _LOCALE_USE_DE_CH
#define _LOCALE_LIST0_7     _LOCALE_LIST0_6     _LOCALE_LIST_HELPER(DeCh)
#define _LOCALE_LIST1_7(a1) _LOCALE_LIST1_6(a1) _LOCALE_LIST_HELPER1(DeCh,a1)
#else
#define _LOCALE_LIST0_7     _LOCALE_LIST0_6
#define _LOCALE_LIST1_7(a1) _LOCALE_LIST1_6(a1)
#endif


#ifdef _LOCALE_USE_DE_DE
#define _LOCALE_LIST0_8     _LOCALE_LIST0_7     _LOCALE_LIST_HELPER(DeDe)
#define _LOCALE_LIST1_8(a1) _LOCALE_LIST1_7(a1) _LOCALE_LIST_HELPER1(DeDe,a1)
#else
#define _LOCALE_LIST0_8     _LOCALE_LIST0_7
#define _LOCALE_LIST1_8(a1) _LOCALE_LIST1_7(a1)
#endif


#ifdef _LOCALE_USE_DE_EU
#define _LOCALE_LIST0_9     _LOCALE_LIST0_8     _LOCALE_LIST_HELPER(DeEu)
#define _LOCALE_LIST1_9(a1) _LOCALE_LIST1_8(a1) _LOCALE_LIST_HELPER1(DeEu,a1)
#else
#define _LOCALE_LIST0_9     _LOCALE_LIST0_8
#define _LOCALE_LIST1_9(a1) _LOCALE_LIST1_8(a1)
#endif


#ifdef _LOCALE_USE_DE_LU
#define _LOCALE_LIST0_10     _LOCALE_LIST0_9     _LOCALE_LIST_HELPER(DeLu)
#define _LOCALE_LIST1_10(a1) _LOCALE_LIST1_9(a1) _LOCALE_LIST_HELPER1(DeLu,a1)
#else
#define _LOCALE_LIST0_10     _LOCALE_LIST0_9
#define _LOCALE_LIST1_10(a1) _LOCALE_LIST1_9(a1)
#endif


#ifdef _LOCALE_USE_EL_EU
#define _LOCALE_LIST0_11     _LOCALE_LIST0_10     _LOCALE_LIST_HELPER(ElEu)
#define _LOCALE_LIST1_11(a1) _LOCALE_LIST1_10(a1) _LOCALE_LIST_HELPER1(ElEu,a1)
#else
#define _LOCALE_LIST0_11     _LOCALE_LIST0_10
#define _LOCALE_LIST1_11(a1) _LOCALE_LIST1_10(a1)
#endif


#ifdef _LOCALE_USE_EL_GR
#define _LOCALE_LIST0_12     _LOCALE_LIST0_11     _LOCALE_LIST_HELPER(ElGr)
#define _LOCALE_LIST1_12(a1) _LOCALE_LIST1_11(a1) _LOCALE_LIST_HELPER1(ElGr,a1)
#else
#define _LOCALE_LIST0_12     _LOCALE_LIST0_11
#define _LOCALE_LIST1_12(a1) _LOCALE_LIST1_11(a1)
#endif


#ifdef _LOCALE_USE_EN_AU
#define _LOCALE_LIST0_13     _LOCALE_LIST0_12     _LOCALE_LIST_HELPER(EnAu)
#define _LOCALE_LIST1_13(a1) _LOCALE_LIST1_12(a1) _LOCALE_LIST_HELPER1(EnAu,a1)
#else
#define _LOCALE_LIST0_13     _LOCALE_LIST0_12
#define _LOCALE_LIST1_13(a1) _LOCALE_LIST1_12(a1)
#endif


#ifdef _LOCALE_USE_EN_CA
#define _LOCALE_LIST0_14     _LOCALE_LIST0_13     _LOCALE_LIST_HELPER(EnCa)
#define _LOCALE_LIST1_14(a1) _LOCALE_LIST1_13(a1) _LOCALE_LIST_HELPER1(EnCa,a1)
#else
#define _LOCALE_LIST0_14     _LOCALE_LIST0_13
#define _LOCALE_LIST1_14(a1) _LOCALE_LIST1_13(a1)
#endif


#ifdef _LOCALE_USE_EN_EU
#define _LOCALE_LIST0_15     _LOCALE_LIST0_14     _LOCALE_LIST_HELPER(EnEu)
#define _LOCALE_LIST1_15(a1) _LOCALE_LIST1_14(a1) _LOCALE_LIST_HELPER1(EnEu,a1)
#else
#define _LOCALE_LIST0_15     _LOCALE_LIST0_14
#define _LOCALE_LIST1_15(a1) _LOCALE_LIST1_14(a1)
#endif


#ifdef _LOCALE_USE_EN_GB
#define _LOCALE_LIST0_16     _LOCALE_LIST0_15     _LOCALE_LIST_HELPER(EnGb)
#define _LOCALE_LIST1_16(a1) _LOCALE_LIST1_15(a1) _LOCALE_LIST_HELPER1(EnGb,a1)
#else
#define _LOCALE_LIST0_16     _LOCALE_LIST0_15
#define _LOCALE_LIST1_16(a1) _LOCALE_LIST1_15(a1)
#endif


#ifdef _LOCALE_USE_EN_IE
#define _LOCALE_LIST0_17     _LOCALE_LIST0_16     _LOCALE_LIST_HELPER(EnIe)
#define _LOCALE_LIST1_17(a1) _LOCALE_LIST1_16(a1) _LOCALE_LIST_HELPER1(EnIe,a1)
#else
#define _LOCALE_LIST0_17     _LOCALE_LIST0_16
#define _LOCALE_LIST1_17(a1) _LOCALE_LIST1_16(a1)
#endif


#ifdef _LOCALE_USE_EN_NZ
#define _LOCALE_LIST0_18     _LOCALE_LIST0_17     _LOCALE_LIST_HELPER(EnNz)
#define _LOCALE_LIST1_18(a1) _LOCALE_LIST1_17(a1) _LOCALE_LIST_HELPER1(EnNz,a1)
#else
#define _LOCALE_LIST0_18     _LOCALE_LIST0_17
#define _LOCALE_LIST1_18(a1) _LOCALE_LIST1_17(a1)
#endif


#ifdef _LOCALE_USE_EN_US
#define _LOCALE_LIST0_19     _LOCALE_LIST0_18     _LOCALE_LIST_HELPER(EnUs)
#define _LOCALE_LIST1_19(a1) _LOCALE_LIST1_18(a1) _LOCALE_LIST_HELPER1(EnUs,a1)
#else
#define _LOCALE_LIST0_19     _LOCALE_LIST0_18
#define _LOCALE_LIST1_19(a1) _LOCALE_LIST1_18(a1)
#endif


#ifdef _LOCALE_USE_ES_AR
#define _LOCALE_LIST0_20     _LOCALE_LIST0_19     _LOCALE_LIST_HELPER(EsAr)
#define _LOCALE_LIST1_20(a1) _LOCALE_LIST1_19(a1) _LOCALE_LIST_HELPER1(EsAr,a1)
#else
#define _LOCALE_LIST0_20     _LOCALE_LIST0_19
#define _LOCALE_LIST1_20(a1) _LOCALE_LIST1_19(a1)
#endif


#ifdef _LOCALE_USE_ES_BO
#define _LOCALE_LIST0_21     _LOCALE_LIST0_20     _LOCALE_LIST_HELPER(EsBo)
#define _LOCALE_LIST1_21(a1) _LOCALE_LIST1_20(a1) _LOCALE_LIST_HELPER1(EsBo,a1)
#else
#define _LOCALE_LIST0_21     _LOCALE_LIST0_20
#define _LOCALE_LIST1_21(a1) _LOCALE_LIST1_20(a1)
#endif


#ifdef _LOCALE_USE_ES_CL
#define _LOCALE_LIST0_22     _LOCALE_LIST0_21     _LOCALE_LIST_HELPER(EsCl)
#define _LOCALE_LIST1_22(a1) _LOCALE_LIST1_21(a1) _LOCALE_LIST_HELPER1(EsCl,a1)
#else
#define _LOCALE_LIST0_22     _LOCALE_LIST0_21
#define _LOCALE_LIST1_22(a1) _LOCALE_LIST1_21(a1)
#endif


#ifdef _LOCALE_USE_ES_CO
#define _LOCALE_LIST0_23     _LOCALE_LIST0_22     _LOCALE_LIST_HELPER(EsCo)
#define _LOCALE_LIST1_23(a1) _LOCALE_LIST1_22(a1) _LOCALE_LIST_HELPER1(EsCo,a1)
#else
#define _LOCALE_LIST0_23     _LOCALE_LIST0_22
#define _LOCALE_LIST1_23(a1) _LOCALE_LIST1_22(a1)
#endif


#ifdef _LOCALE_USE_ES_DO
#define _LOCALE_LIST0_24     _LOCALE_LIST0_23     _LOCALE_LIST_HELPER(EsDo)
#define _LOCALE_LIST1_24(a1) _LOCALE_LIST1_23(a1) _LOCALE_LIST_HELPER1(EsDo,a1)
#else
#define _LOCALE_LIST0_24     _LOCALE_LIST0_23
#define _LOCALE_LIST1_24(a1) _LOCALE_LIST1_23(a1)
#endif


#ifdef _LOCALE_USE_ES_EC
#define _LOCALE_LIST0_25     _LOCALE_LIST0_24     _LOCALE_LIST_HELPER(EsEc)
#define _LOCALE_LIST1_25(a1) _LOCALE_LIST1_24(a1) _LOCALE_LIST_HELPER1(EsEc,a1)
#else
#define _LOCALE_LIST0_25     _LOCALE_LIST0_24
#define _LOCALE_LIST1_25(a1) _LOCALE_LIST1_24(a1)
#endif


#ifdef _LOCALE_USE_ES_ES
#define _LOCALE_LIST0_26     _LOCALE_LIST0_25     _LOCALE_LIST_HELPER(EsEs)
#define _LOCALE_LIST1_26(a1) _LOCALE_LIST1_25(a1) _LOCALE_LIST_HELPER1(EsEs,a1)
#else
#define _LOCALE_LIST0_26     _LOCALE_LIST0_25
#define _LOCALE_LIST1_26(a1) _LOCALE_LIST1_25(a1)
#endif


#ifdef _LOCALE_USE_ES_EU
#define _LOCALE_LIST0_27     _LOCALE_LIST0_26     _LOCALE_LIST_HELPER(EsEu)
#define _LOCALE_LIST1_27(a1) _LOCALE_LIST1_26(a1) _LOCALE_LIST_HELPER1(EsEu,a1)
#else
#define _LOCALE_LIST0_27     _LOCALE_LIST0_26
#define _LOCALE_LIST1_27(a1) _LOCALE_LIST1_26(a1)
#endif


#ifdef _LOCALE_USE_ES_GT
#define _LOCALE_LIST0_28     _LOCALE_LIST0_27     _LOCALE_LIST_HELPER(EsGt)
#define _LOCALE_LIST1_28(a1) _LOCALE_LIST1_27(a1) _LOCALE_LIST_HELPER1(EsGt,a1)
#else
#define _LOCALE_LIST0_28     _LOCALE_LIST0_27
#define _LOCALE_LIST1_28(a1) _LOCALE_LIST1_27(a1)
#endif


#ifdef _LOCALE_USE_ES_HN
#define _LOCALE_LIST0_29     _LOCALE_LIST0_28     _LOCALE_LIST_HELPER(EsHn)
#define _LOCALE_LIST1_29(a1) _LOCALE_LIST1_28(a1) _LOCALE_LIST_HELPER1(EsHn,a1)
#else
#define _LOCALE_LIST0_29     _LOCALE_LIST0_28
#define _LOCALE_LIST1_29(a1) _LOCALE_LIST1_28(a1)
#endif


#ifdef _LOCALE_USE_ES_MX
#define _LOCALE_LIST0_30     _LOCALE_LIST0_29     _LOCALE_LIST_HELPER(EsMx)
#define _LOCALE_LIST1_30(a1) _LOCALE_LIST1_29(a1) _LOCALE_LIST_HELPER1(EsMx,a1)
#else
#define _LOCALE_LIST0_30     _LOCALE_LIST0_29
#define _LOCALE_LIST1_30(a1) _LOCALE_LIST1_29(a1)
#endif


#ifdef _LOCALE_USE_ES_PA
#define _LOCALE_LIST0_31     _LOCALE_LIST0_30     _LOCALE_LIST_HELPER(EsPa)
#define _LOCALE_LIST1_31(a1) _LOCALE_LIST1_30(a1) _LOCALE_LIST_HELPER1(EsPa,a1)
#else
#define _LOCALE_LIST0_31     _LOCALE_LIST0_30
#define _LOCALE_LIST1_31(a1) _LOCALE_LIST1_30(a1)
#endif


#ifdef _LOCALE_USE_ES_PE
#define _LOCALE_LIST0_32     _LOCALE_LIST0_31     _LOCALE_LIST_HELPER(EsPe)
#define _LOCALE_LIST1_32(a1) _LOCALE_LIST1_31(a1) _LOCALE_LIST_HELPER1(EsPe,a1)
#else
#define _LOCALE_LIST0_32     _LOCALE_LIST0_31
#define _LOCALE_LIST1_32(a1) _LOCALE_LIST1_31(a1)
#endif


#ifdef _LOCALE_USE_ES_PY
#define _LOCALE_LIST0_33     _LOCALE_LIST0_32     _LOCALE_LIST_HELPER(EsPy)
#define _LOCALE_LIST1_33(a1) _LOCALE_LIST1_32(a1) _LOCALE_LIST_HELPER1(EsPy,a1)
#else
#define _LOCALE_LIST0_33     _LOCALE_LIST0_32
#define _LOCALE_LIST1_33(a1) _LOCALE_LIST1_32(a1)
#endif


#ifdef _LOCALE_USE_ES_SV
#define _LOCALE_LIST0_34     _LOCALE_LIST0_33     _LOCALE_LIST_HELPER(EsSv)
#define _LOCALE_LIST1_34(a1) _LOCALE_LIST1_33(a1) _LOCALE_LIST_HELPER1(EsSv,a1)
#else
#define _LOCALE_LIST0_34     _LOCALE_LIST0_33
#define _LOCALE_LIST1_34(a1) _LOCALE_LIST1_33(a1)
#endif


#ifdef _LOCALE_USE_ES_US
#define _LOCALE_LIST0_35     _LOCALE_LIST0_34     _LOCALE_LIST_HELPER(EsUs)
#define _LOCALE_LIST1_35(a1) _LOCALE_LIST1_34(a1) _LOCALE_LIST_HELPER1(EsUs,a1)
#else
#define _LOCALE_LIST0_35     _LOCALE_LIST0_34
#define _LOCALE_LIST1_35(a1) _LOCALE_LIST1_34(a1)
#endif


#ifdef _LOCALE_USE_ES_UY
#define _LOCALE_LIST0_36     _LOCALE_LIST0_35     _LOCALE_LIST_HELPER(EsUy)
#define _LOCALE_LIST1_36(a1) _LOCALE_LIST1_35(a1) _LOCALE_LIST_HELPER1(EsUy,a1)
#else
#define _LOCALE_LIST0_36     _LOCALE_LIST0_35
#define _LOCALE_LIST1_36(a1) _LOCALE_LIST1_35(a1)
#endif


#ifdef _LOCALE_USE_ES_VE
#define _LOCALE_LIST0_37     _LOCALE_LIST0_36     _LOCALE_LIST_HELPER(EsVe)
#define _LOCALE_LIST1_37(a1) _LOCALE_LIST1_36(a1) _LOCALE_LIST_HELPER1(EsVe,a1)
#else
#define _LOCALE_LIST0_37     _LOCALE_LIST0_36
#define _LOCALE_LIST1_37(a1) _LOCALE_LIST1_36(a1)
#endif


#ifdef _LOCALE_USE_ET_EE
#define _LOCALE_LIST0_38     _LOCALE_LIST0_37     _LOCALE_LIST_HELPER(EtEe)
#define _LOCALE_LIST1_38(a1) _LOCALE_LIST1_37(a1) _LOCALE_LIST_HELPER1(EtEe,a1)
#else
#define _LOCALE_LIST0_38     _LOCALE_LIST0_37
#define _LOCALE_LIST1_38(a1) _LOCALE_LIST1_37(a1)
#endif


#ifdef _LOCALE_USE_EU_ES
#define _LOCALE_LIST0_39     _LOCALE_LIST0_38     _LOCALE_LIST_HELPER(EuEs)
#define _LOCALE_LIST1_39(a1) _LOCALE_LIST1_38(a1) _LOCALE_LIST_HELPER1(EuEs,a1)
#else
#define _LOCALE_LIST0_39     _LOCALE_LIST0_38
#define _LOCALE_LIST1_39(a1) _LOCALE_LIST1_38(a1)
#endif


#ifdef _LOCALE_USE_FI_EU
#define _LOCALE_LIST0_40     _LOCALE_LIST0_39     _LOCALE_LIST_HELPER(FiEu)
#define _LOCALE_LIST1_40(a1) _LOCALE_LIST1_39(a1) _LOCALE_LIST_HELPER1(FiEu,a1)
#else
#define _LOCALE_LIST0_40     _LOCALE_LIST0_39
#define _LOCALE_LIST1_40(a1) _LOCALE_LIST1_39(a1)
#endif


#ifdef _LOCALE_USE_FI_FI
#define _LOCALE_LIST0_41     _LOCALE_LIST0_40     _LOCALE_LIST_HELPER(FiFi)
#define _LOCALE_LIST1_41(a1) _LOCALE_LIST1_40(a1) _LOCALE_LIST_HELPER1(FiFi,a1)
#else
#define _LOCALE_LIST0_41     _LOCALE_LIST0_40
#define _LOCALE_LIST1_41(a1) _LOCALE_LIST1_40(a1)
#endif


#ifdef _LOCALE_USE_FO_FO
#define _LOCALE_LIST0_42     _LOCALE_LIST0_41     _LOCALE_LIST_HELPER(FoFo)
#define _LOCALE_LIST1_42(a1) _LOCALE_LIST1_41(a1) _LOCALE_LIST_HELPER1(FoFo,a1)
#else
#define _LOCALE_LIST0_42     _LOCALE_LIST0_41
#define _LOCALE_LIST1_42(a1) _LOCALE_LIST1_41(a1)
#endif


#ifdef _LOCALE_USE_FR_BE
#define _LOCALE_LIST0_43     _LOCALE_LIST0_42     _LOCALE_LIST_HELPER(FrBe)
#define _LOCALE_LIST1_43(a1) _LOCALE_LIST1_42(a1) _LOCALE_LIST_HELPER1(FrBe,a1)
#else
#define _LOCALE_LIST0_43     _LOCALE_LIST0_42
#define _LOCALE_LIST1_43(a1) _LOCALE_LIST1_42(a1)
#endif


#ifdef _LOCALE_USE_FR_CA
#define _LOCALE_LIST0_44     _LOCALE_LIST0_43     _LOCALE_LIST_HELPER(FrCa)
#define _LOCALE_LIST1_44(a1) _LOCALE_LIST1_43(a1) _LOCALE_LIST_HELPER1(FrCa,a1)
#else
#define _LOCALE_LIST0_44     _LOCALE_LIST0_43
#define _LOCALE_LIST1_44(a1) _LOCALE_LIST1_43(a1)
#endif


#ifdef _LOCALE_USE_FR_CH
#define _LOCALE_LIST0_45     _LOCALE_LIST0_44     _LOCALE_LIST_HELPER(FrCh)
#define _LOCALE_LIST1_45(a1) _LOCALE_LIST1_44(a1) _LOCALE_LIST_HELPER1(FrCh,a1)
#else
#define _LOCALE_LIST0_45     _LOCALE_LIST0_44
#define _LOCALE_LIST1_45(a1) _LOCALE_LIST1_44(a1)
#endif


#ifdef _LOCALE_USE_FR_EU
#define _LOCALE_LIST0_46     _LOCALE_LIST0_45     _LOCALE_LIST_HELPER(FrEu)
#define _LOCALE_LIST1_46(a1) _LOCALE_LIST1_45(a1) _LOCALE_LIST_HELPER1(FrEu,a1)
#else
#define _LOCALE_LIST0_46     _LOCALE_LIST0_45
#define _LOCALE_LIST1_46(a1) _LOCALE_LIST1_45(a1)
#endif


#ifdef _LOCALE_USE_FR_FR
#define _LOCALE_LIST0_47     _LOCALE_LIST0_46     _LOCALE_LIST_HELPER(FrFr)
#define _LOCALE_LIST1_47(a1) _LOCALE_LIST1_46(a1) _LOCALE_LIST_HELPER1(FrFr,a1)
#else
#define _LOCALE_LIST0_47     _LOCALE_LIST0_46
#define _LOCALE_LIST1_47(a1) _LOCALE_LIST1_46(a1)
#endif


#ifdef _LOCALE_USE_FR_LU
#define _LOCALE_LIST0_48     _LOCALE_LIST0_47     _LOCALE_LIST_HELPER(FrLu)
#define _LOCALE_LIST1_48(a1) _LOCALE_LIST1_47(a1) _LOCALE_LIST_HELPER1(FrLu,a1)
#else
#define _LOCALE_LIST0_48     _LOCALE_LIST0_47
#define _LOCALE_LIST1_48(a1) _LOCALE_LIST1_47(a1)
#endif


#ifdef _LOCALE_USE_GA_EU
#define _LOCALE_LIST0_49     _LOCALE_LIST0_48     _LOCALE_LIST_HELPER(GaEu)
#define _LOCALE_LIST1_49(a1) _LOCALE_LIST1_48(a1) _LOCALE_LIST_HELPER1(GaEu,a1)
#else
#define _LOCALE_LIST0_49     _LOCALE_LIST0_48
#define _LOCALE_LIST1_49(a1) _LOCALE_LIST1_48(a1)
#endif


#ifdef _LOCALE_USE_GA_IE
#define _LOCALE_LIST0_50     _LOCALE_LIST0_49     _LOCALE_LIST_HELPER(GaIe)
#define _LOCALE_LIST1_50(a1) _LOCALE_LIST1_49(a1) _LOCALE_LIST_HELPER1(GaIe,a1)
#else
#define _LOCALE_LIST0_50     _LOCALE_LIST0_49
#define _LOCALE_LIST1_50(a1) _LOCALE_LIST1_49(a1)
#endif


#ifdef _LOCALE_USE_GL_ES
#define _LOCALE_LIST0_51     _LOCALE_LIST0_50     _LOCALE_LIST_HELPER(GlEs)
#define _LOCALE_LIST1_51(a1) _LOCALE_LIST1_50(a1) _LOCALE_LIST_HELPER1(GlEs,a1)
#else
#define _LOCALE_LIST0_51     _LOCALE_LIST0_50
#define _LOCALE_LIST1_51(a1) _LOCALE_LIST1_50(a1)
#endif


#ifdef _LOCALE_USE_HR_HR
#define _LOCALE_LIST0_52     _LOCALE_LIST0_51     _LOCALE_LIST_HELPER(HrHr)
#define _LOCALE_LIST1_52(a1) _LOCALE_LIST1_51(a1) _LOCALE_LIST_HELPER1(HrHr,a1)
#else
#define _LOCALE_LIST0_52     _LOCALE_LIST0_51
#define _LOCALE_LIST1_52(a1) _LOCALE_LIST1_51(a1)
#endif


#ifdef _LOCALE_USE_HU_HU
#define _LOCALE_LIST0_53     _LOCALE_LIST0_52     _LOCALE_LIST_HELPER(HuHu)
#define _LOCALE_LIST1_53(a1) _LOCALE_LIST1_52(a1) _LOCALE_LIST_HELPER1(HuHu,a1)
#else
#define _LOCALE_LIST0_53     _LOCALE_LIST0_52
#define _LOCALE_LIST1_53(a1) _LOCALE_LIST1_52(a1)
#endif


#ifdef _LOCALE_USE_ID_ID
#define _LOCALE_LIST0_54     _LOCALE_LIST0_53     _LOCALE_LIST_HELPER(IdId)
#define _LOCALE_LIST1_54(a1) _LOCALE_LIST1_53(a1) _LOCALE_LIST_HELPER1(IdId,a1)
#else
#define _LOCALE_LIST0_54     _LOCALE_LIST0_53
#define _LOCALE_LIST1_54(a1) _LOCALE_LIST1_53(a1)
#endif


#ifdef _LOCALE_USE_IS_EU
#define _LOCALE_LIST0_55     _LOCALE_LIST0_54     _LOCALE_LIST_HELPER(IsEu)
#define _LOCALE_LIST1_55(a1) _LOCALE_LIST1_54(a1) _LOCALE_LIST_HELPER1(IsEu,a1)
#else
#define _LOCALE_LIST0_55     _LOCALE_LIST0_54
#define _LOCALE_LIST1_55(a1) _LOCALE_LIST1_54(a1)
#endif


#ifdef _LOCALE_USE_IS_IS
#define _LOCALE_LIST0_56     _LOCALE_LIST0_55     _LOCALE_LIST_HELPER(IsIs)
#define _LOCALE_LIST1_56(a1) _LOCALE_LIST1_55(a1) _LOCALE_LIST_HELPER1(IsIs,a1)
#else
#define _LOCALE_LIST0_56     _LOCALE_LIST0_55
#define _LOCALE_LIST1_56(a1) _LOCALE_LIST1_55(a1)
#endif


#ifdef _LOCALE_USE_IT_EU
#define _LOCALE_LIST0_57     _LOCALE_LIST0_56     _LOCALE_LIST_HELPER(ItEu)
#define _LOCALE_LIST1_57(a1) _LOCALE_LIST1_56(a1) _LOCALE_LIST_HELPER1(ItEu,a1)
#else
#define _LOCALE_LIST0_57     _LOCALE_LIST0_56
#define _LOCALE_LIST1_57(a1) _LOCALE_LIST1_56(a1)
#endif


#ifdef _LOCALE_USE_IT_IT
#define _LOCALE_LIST0_58     _LOCALE_LIST0_57     _LOCALE_LIST_HELPER(ItIt)
#define _LOCALE_LIST1_58(a1) _LOCALE_LIST1_57(a1) _LOCALE_LIST_HELPER1(ItIt,a1)
#else
#define _LOCALE_LIST0_58     _LOCALE_LIST0_57
#define _LOCALE_LIST1_58(a1) _LOCALE_LIST1_57(a1)
#endif


#ifdef _LOCALE_USE_IW_IL
#define _LOCALE_LIST0_59     _LOCALE_LIST0_58     _LOCALE_LIST_HELPER(IwIl)
#define _LOCALE_LIST1_59(a1) _LOCALE_LIST1_58(a1) _LOCALE_LIST_HELPER1(IwIl,a1)
#else
#define _LOCALE_LIST0_59     _LOCALE_LIST0_58
#define _LOCALE_LIST1_59(a1) _LOCALE_LIST1_58(a1)
#endif


#ifdef _LOCALE_USE_KL_GL
#define _LOCALE_LIST0_60     _LOCALE_LIST0_59     _LOCALE_LIST_HELPER(KlGl)
#define _LOCALE_LIST1_60(a1) _LOCALE_LIST1_59(a1) _LOCALE_LIST_HELPER1(KlGl,a1)
#else
#define _LOCALE_LIST0_60     _LOCALE_LIST0_59
#define _LOCALE_LIST1_60(a1) _LOCALE_LIST1_59(a1)
#endif


#ifdef _LOCALE_USE_LT_LT
#define _LOCALE_LIST0_61     _LOCALE_LIST0_60     _LOCALE_LIST_HELPER(LtLt)
#define _LOCALE_LIST1_61(a1) _LOCALE_LIST1_60(a1) _LOCALE_LIST_HELPER1(LtLt,a1)
#else
#define _LOCALE_LIST0_61     _LOCALE_LIST0_60
#define _LOCALE_LIST1_61(a1) _LOCALE_LIST1_60(a1)
#endif


#ifdef _LOCALE_USE_LV_LV
#define _LOCALE_LIST0_62     _LOCALE_LIST0_61     _LOCALE_LIST_HELPER(LvLv)
#define _LOCALE_LIST1_62(a1) _LOCALE_LIST1_61(a1) _LOCALE_LIST_HELPER1(LvLv,a1)
#else
#define _LOCALE_LIST0_62     _LOCALE_LIST0_61
#define _LOCALE_LIST1_62(a1) _LOCALE_LIST1_61(a1)
#endif


#ifdef _LOCALE_USE_NL_BE
#define _LOCALE_LIST0_63     _LOCALE_LIST0_62     _LOCALE_LIST_HELPER(NlBe)
#define _LOCALE_LIST1_63(a1) _LOCALE_LIST1_62(a1) _LOCALE_LIST_HELPER1(NlBe,a1)
#else
#define _LOCALE_LIST0_63     _LOCALE_LIST0_62
#define _LOCALE_LIST1_63(a1) _LOCALE_LIST1_62(a1)
#endif


#ifdef _LOCALE_USE_NL_EU
#define _LOCALE_LIST0_64     _LOCALE_LIST0_63     _LOCALE_LIST_HELPER(NlEu)
#define _LOCALE_LIST1_64(a1) _LOCALE_LIST1_63(a1) _LOCALE_LIST_HELPER1(NlEu,a1)
#else
#define _LOCALE_LIST0_64     _LOCALE_LIST0_63
#define _LOCALE_LIST1_64(a1) _LOCALE_LIST1_63(a1)
#endif


#ifdef _LOCALE_USE_NL_NL
#define _LOCALE_LIST0_65     _LOCALE_LIST0_64     _LOCALE_LIST_HELPER(NlNl)
#define _LOCALE_LIST1_65(a1) _LOCALE_LIST1_64(a1) _LOCALE_LIST_HELPER1(NlNl,a1)
#else
#define _LOCALE_LIST0_65     _LOCALE_LIST0_64
#define _LOCALE_LIST1_65(a1) _LOCALE_LIST1_64(a1)
#endif


#ifdef _LOCALE_USE_NO_EU
#define _LOCALE_LIST0_66     _LOCALE_LIST0_65     _LOCALE_LIST_HELPER(NoEu)
#define _LOCALE_LIST1_66(a1) _LOCALE_LIST1_65(a1) _LOCALE_LIST_HELPER1(NoEu,a1)
#else
#define _LOCALE_LIST0_66     _LOCALE_LIST0_65
#define _LOCALE_LIST1_66(a1) _LOCALE_LIST1_65(a1)
#endif


#ifdef _LOCALE_USE_NO_NO
#define _LOCALE_LIST0_67     _LOCALE_LIST0_66     _LOCALE_LIST_HELPER(NoNo)
#define _LOCALE_LIST1_67(a1) _LOCALE_LIST1_66(a1) _LOCALE_LIST_HELPER1(NoNo,a1)
#else
#define _LOCALE_LIST0_67     _LOCALE_LIST0_66
#define _LOCALE_LIST1_67(a1) _LOCALE_LIST1_66(a1)
#endif


#ifdef _LOCALE_USE_PL_PL
#define _LOCALE_LIST0_68     _LOCALE_LIST0_67     _LOCALE_LIST_HELPER(PlPl)
#define _LOCALE_LIST1_68(a1) _LOCALE_LIST1_67(a1) _LOCALE_LIST_HELPER1(PlPl,a1)
#else
#define _LOCALE_LIST0_68     _LOCALE_LIST0_67
#define _LOCALE_LIST1_68(a1) _LOCALE_LIST1_67(a1)
#endif


#ifdef _LOCALE_USE_PT_BR
#define _LOCALE_LIST0_69     _LOCALE_LIST0_68     _LOCALE_LIST_HELPER(PtBr)
#define _LOCALE_LIST1_69(a1) _LOCALE_LIST1_68(a1) _LOCALE_LIST_HELPER1(PtBr,a1)
#else
#define _LOCALE_LIST0_69     _LOCALE_LIST0_68
#define _LOCALE_LIST1_69(a1) _LOCALE_LIST1_68(a1)
#endif


#ifdef _LOCALE_USE_PT_EU
#define _LOCALE_LIST0_70     _LOCALE_LIST0_69     _LOCALE_LIST_HELPER(PtEu)
#define _LOCALE_LIST1_70(a1) _LOCALE_LIST1_69(a1) _LOCALE_LIST_HELPER1(PtEu,a1)
#else
#define _LOCALE_LIST0_70     _LOCALE_LIST0_69
#define _LOCALE_LIST1_70(a1) _LOCALE_LIST1_69(a1)
#endif


#ifdef _LOCALE_USE_PT_PT
#define _LOCALE_LIST0_71     _LOCALE_LIST0_70     _LOCALE_LIST_HELPER(PtPt)
#define _LOCALE_LIST1_71(a1) _LOCALE_LIST1_70(a1) _LOCALE_LIST_HELPER1(PtPt,a1)
#else
#define _LOCALE_LIST0_71     _LOCALE_LIST0_70
#define _LOCALE_LIST1_71(a1) _LOCALE_LIST1_70(a1)
#endif


#ifdef _LOCALE_USE_RO_RO
#define _LOCALE_LIST0_72     _LOCALE_LIST0_71     _LOCALE_LIST_HELPER(RoRo)
#define _LOCALE_LIST1_72(a1) _LOCALE_LIST1_71(a1) _LOCALE_LIST_HELPER1(RoRo,a1)
#else
#define _LOCALE_LIST0_72     _LOCALE_LIST0_71
#define _LOCALE_LIST1_72(a1) _LOCALE_LIST1_71(a1)
#endif


#ifdef _LOCALE_USE_RU_RU
#define _LOCALE_LIST0_73     _LOCALE_LIST0_72     _LOCALE_LIST_HELPER(RuRu)
#define _LOCALE_LIST1_73(a1) _LOCALE_LIST1_72(a1) _LOCALE_LIST_HELPER1(RuRu,a1)
#else
#define _LOCALE_LIST0_73     _LOCALE_LIST0_72
#define _LOCALE_LIST1_73(a1) _LOCALE_LIST1_72(a1)
#endif


#ifdef _LOCALE_USE_SL_SI
#define _LOCALE_LIST0_74     _LOCALE_LIST0_73     _LOCALE_LIST_HELPER(SlSi)
#define _LOCALE_LIST1_74(a1) _LOCALE_LIST1_73(a1) _LOCALE_LIST_HELPER1(SlSi,a1)
#else
#define _LOCALE_LIST0_74     _LOCALE_LIST0_73
#define _LOCALE_LIST1_74(a1) _LOCALE_LIST1_73(a1)
#endif


#ifdef _LOCALE_USE_SV_EU
#define _LOCALE_LIST0_75     _LOCALE_LIST0_74     _LOCALE_LIST_HELPER(SvEu)
#define _LOCALE_LIST1_75(a1) _LOCALE_LIST1_74(a1) _LOCALE_LIST_HELPER1(SvEu,a1)
#else
#define _LOCALE_LIST0_75     _LOCALE_LIST0_74
#define _LOCALE_LIST1_75(a1) _LOCALE_LIST1_74(a1)
#endif


#ifdef _LOCALE_USE_SV_FI
#define _LOCALE_LIST0_76     _LOCALE_LIST0_75     _LOCALE_LIST_HELPER(SvFi)
#define _LOCALE_LIST1_76(a1) _LOCALE_LIST1_75(a1) _LOCALE_LIST_HELPER1(SvFi,a1)
#else
#define _LOCALE_LIST0_76     _LOCALE_LIST0_75
#define _LOCALE_LIST1_76(a1) _LOCALE_LIST1_75(a1)
#endif


#ifdef _LOCALE_USE_SV_SE
#define _LOCALE_LIST0_77     _LOCALE_LIST0_76     _LOCALE_LIST_HELPER(SvSe)
#define _LOCALE_LIST1_77(a1) _LOCALE_LIST1_76(a1) _LOCALE_LIST_HELPER1(SvSe,a1)
#else
#define _LOCALE_LIST0_77     _LOCALE_LIST0_76
#define _LOCALE_LIST1_77(a1) _LOCALE_LIST1_76(a1)
#endif


#ifdef _LOCALE_USE_TR_TR
#define _LOCALE_LIST0_78     _LOCALE_LIST0_77     _LOCALE_LIST_HELPER(TrTr)
#define _LOCALE_LIST1_78(a1) _LOCALE_LIST1_77(a1) _LOCALE_LIST_HELPER1(TrTr,a1)
#else
#define _LOCALE_LIST0_78     _LOCALE_LIST0_77
#define _LOCALE_LIST1_78(a1) _LOCALE_LIST1_77(a1)
#endif


#define _LOCALE_LIST  _LOCALE_LIST0_78
#define _LOCALE_LIST1 _LOCALE_LIST1_78

#endif /* _LOCALELIST_H */
