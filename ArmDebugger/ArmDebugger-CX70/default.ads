[Main]
ID=6644
FlashAddress=-1610612736
FlashSize=33554432
NucleusLow=0
NucleusHigh=0
[BootCommands]
C0=
C1=
C2=
C3=
C4=
[Editor]
Source0=
Target0=-1
Source1=
Target1=-1
Source2=
Target2=-1
Source3=
Target3=-1
Source4=
Target4=-1
Source5=
Target5=-1
Source6=
Target6=-1
Source7=
Target7=-1
Source8=
Target8=-1
[Appearance]
RP1address=-1598073415
RP2address=-1591561962
CPaddress=-1598073418
[Names]
A0002520=boot_wadog_chek
A00037C0=DecodeSWUP
A0003A80=DecodeBlock
A0005E6C=boot_set_mem
A002C01C=4202_Lock_AL
A0092E1C=DisableIconBar
A0820F98=malloc
A0820FA4=realloc
A0821000=mfree
A082100C=GetFreeRamAvail
A08211F0=MemMBPAlloc
A08215B4=MemMBPFree
A0821E20=mopi_msg
A0824068=PGroupCurrentTaskPointer
A0824144=GetGBSProcAddress
A0824380=KillGBSproc
A08243BC=GBS_GetCurCepid
A08257CE=GetWeek
A0825C8E=InitTime
A0825D78=StrCmpNoCase
A0825E59=wstrcopy
A0826964=GBS_RecActDstMessage
A0826AA0=GBS_ReciveMessage
A0826EC8=GBS_ClearMessag
A0827098=GBS_PendMessage
A08271A0=GBS_AcceptMessag
A082769C=GBS_WaitForMsg
A0827B04=GBS_SendMessage
A0827F74=CreateGBSproc
A0827FC4=GBS_ActSProc
A0828044=GBS_DeactSProc
A0828148=CreateICL
A0828294=GBS_StartTimerProc
A0828330=GBS_StartTimer
A08283A0=IsTimerProc
A0828F64=MutexCreate
A0829090=MutexDestroy
A0829210=MutexLock
A0829268=MutexLockEx
A08292C4=MutexUnlock
A082949C=LockSched
A0829524=UnlockSched
A08298B4=GBS_DelTimer
A0829A08=GBS_StopTimer
A082A384=NU_Create_Memory_Pool
A082A414=NU_Delete_Memory_Poo
A082A434=NU_Allocate_Memory
A082A4C0=NU_Deallocate_Memory
A082A4F8=NU_Established_Memory_Pools
A082A50C=NU_Memory_Pool_Pointers
A082A57C=NU_Memory_Pool_Information
A082A678=NU_Create_Mailbox
A082A6A4=NU_Delete_Mailbox
A082A6C4=NU_Send_To_Mailbox
A082A728=Receive_From_Mailbox
A082A814=NU_Delete_Partition_Pool
A082A834=NU_Allocate_Partition
A082A898=NU_Deallocate_Partition
A082A8D0=NU_Established_Partition_Pools
A082A8E4=NU_Partition_Pool_Pointers
A082A954=NU_Partition_Pool_Information
A082AA60=NU_Create_Task
A082AB0C=NU_Create_HISR
A082AB7C=NU_Delete_Task
A082ABB8=NU_Delete_HISR
A082ABD8=NU_Reset_Task
A082ABF8=NU_Terminate_Task
A082ACC0=NU_Resume_Task
A082AD08=NU_Suspend_Task
A082AD44=NU_Relinquish
A082AD68=NU_Sleep
A082ADC4=NU_Activate_HISR
A082AE28=NU_Established_Tasks
A082AE3C=NU_Established_HISRs
A082AE50=NU_Task_Pointers
A082AEC0=NU_HISR_Pointers
A082B01C=NU_HISR_Information
A082B0FC=NU_Task_Information
A082B188=NU_Create_Timer
A082B1FC=NU_Delete_Timer
A082B21C=NU_Reset_Timer
A082B280=NU_Control_Timer
A082BE20=DecToHex
A082BE5C=StrToInt
A082EA5C=TaskCreate
A082EC3C=HisrCreate
A082F6EC=NU_Create_Event_Group
A082F708=NU_Delete_Event_Group
A082F728=NU_Set_Events
A082F75C=NU_Retrieve_Events
A08300AC=NU_Create_Semaphore
A08300E4=NU_Delete_Semaphore
A0830104=NU_Obtain_Semaphore
A0830154=NU_Release_Semaphore
A0830CCC=NU_Current_Task_Pointer
A0830CF4=NU_Current_HISR_Pointer
A0830F5C=NU_Register_Lisr
A0831050=NU_Change_Priority
A0831068=NU_Change_Preemption
A0831084=NU_Change_Time_Slice
A083109C=NU_Create_Partition_Pool
A0831130=NU_Established_Timers
A0831144=NU_Timer_Pointers
A08311B4=NU_Timer_Information
A0832F5C=NU_Create_Queue
A0832FFC=NU_Delete_Queue
A083301C=NU_Send_To_Queue
A08330C0=NU_Receive_From_Queue
A0833170=NU_Established_Queues
A0833184=NU_Queue_Pointers
A08331F4=NU_Queue_Information
A0834BD0=NU_License_Information
A0835540=NU_Release_Information
A0836F4C=ClearMemory
A0837018=divide
A08370D8=NU_SUPERVISOR_MODE
A0837178=NU_USER_MODE
A0837230=NU_Control_Interrupts
A083725C=NU_Local_Control_Interrupts
A0837278=NU_Restore_Interrupts
A08373F4=NU_Check_Stack
A083764C=NU_Protect
A08376D8=NU_Unprotect
A0837C5C=NU_Set_Clock
A0837C68=NU_Retrieve_Clock
A0837F80=Disable_INT
A0837FA0=Enable_INT
A0838AE8=jmp_memcpy
A08751D4=inflateInit2_
A087530B=inflate
A0876146=inflateEnd
A08A5BBC=jmp_strcmp
A08A5C78=jmp_strlen
A08A9BBC=jmp_sprintf
A08CAED8=ActivateDialUpProfile
A08CAF02=RegisterCepIdForCurProfile
A08D1866=SetProfile
A08D1998=GetProfile
A08D1FD4=GetProfileFilter
A08E37E4=PathOfFoundFile
A08E4D08=filecopy
A08E6BF4=filecopy_op_announce
A08F00FE=GetVibraStatus
A08F0114=SwitchVibraOnOff
A08F02BA=ShowMainMenu
A08F0856=GetFunctionPoenter
A08F9922=onmessage_idle_hotkey
A08FA2CA=onmessage_menu_hotkey
A08FB15E=ShowNativeMenu
A0918CDC=GetMMIMemUsed
A0918D0E=GetCPULoa
A0951D24=get_regextpnt_by_uid
A0951EA4=GetExtUid_ws
A095233C=GetExtUidByFileName_ws
A09525FE=RegExplorerExt
A09526B8=ExecuteFile
A0959C24=PlaySoundLoop
A0964774=PlaySound2
A0966BEC=PlayFile
A0966E14=PlayMelody_ChangeVolume
A09671EC=PlayMelody_StopPlayback
A096728C=PlayMelody_PausePlayback
A09672D0=PlayMelody_ResumePlayBack
A096E590=PlaySound
A09798B0=CreateObject
A097A21C=Obs_DestroyObject
A098E56C=GetWavLen
A098EB0C=CardExplGetFName
A098F71C=OpenExplorer
A098F758=StartNativeExplorer
A09D5D0C=CardExplGetCurItem
A09DD948=Pph_Theme
A0A6F472=SendSMS
A0A6FDD0=editOrNewTXTModule
A0A71E7E=ReadNewSMS
A0ACC4F8=AlarmClockRing
A0AD4326=OriginalATCGSN
A0B110C4=CreateMultiLinesMenu
A0B77360=LoadProcesses
A0B786EC=PostAtCommand
A0B78D50=GetATCmdString
A0B79E0A=SendATAnswerStr
A0B7D0C4=GBSPROC_CHIPKARTE_TOOLKIT
A0B7E538=GSMTXT_Decode
A0B80084=MakeVoiceCall
A0B82D46=EndCallBusy
A0B83F46=Get_CC_N
A0B850EE=GBSPROC_SMSAL_PROCESS
A0B8582C=SendAutoUSSDac
A0B85882=FreeGSMTXTpkt
A0B8AA2A=SettingsRead
A0B8AA32=SettingsWrite
A0B8AA42=SettingsGetEntriesNum
A0B8AA68=SettingsUpdate
A0B8DE0C=udial_debug
A0B8DE80=udial_debug2
A0B8E2F2=IllumTimeRequest
A0B8E30E=IllumTimeRelease
A0B8E63A=GBSPROC_DYNAMIC_LIGHT
A0B905CA=GetTimeZoneShift
A0B9063A=GetDateTime
A0B908E2=SetDateTime
A0B914B6=GetTimeFormat
A0B9CE9A=GetCurrentSecondOfCall
A0BA0CE0=GetMissedCallsCount
A0BA2408=EndCall
A0BA49A2=GetProvider
A0BAF7FA=FreeUnpackABentry
A0BAFFF0=GetTypeOfAB_UNPRES_ITEM
A0BBD662=GBSPROC_EMSAL_PROCESS
A0BD1A0C=TempLigntOn
A0BF55B4=crc32
A0BF5698=strcrc32
A0C3373E=UnpackABentry
A0C35CB0=GetMissedEventsPtr
A0C3AEDC=mfree_high
A0C4FF64=jmp2_strlen
A0C505F0=jmp_GBS_ActSProc
A0C505F8=jmp_GBS_DeactProc
A0C8C7BE=wsprintf
A0C8C81C=wstrcatprf
A0C8C900=FreeWS
A0C8CA1A=wstrlen
A0C8CA46=wstrcmp
A0C8CCA4=wstrchr
A0C8CCC6=wstrrchr
A0C8CD42=Unicode_GetByPosition
A0C8CF4E=CreateLocalWS
A0C8CF6E=CreateWS
A0C8CFB6=AllocWS
A0C8CFF2=wsFree
A0C8D0D6=wstrcpy
A0C8D0F8=wstrncpy
A0C8D11C=wstrcat
A0C8D1B0=wstrncat
A0C8D1D8=wstrcpybypos
A0C8D1F8=wsInsert
A0C8D244=wsAppend
A0C8D268=wsRemoves
A0C8D3AA=CutWSTR
A0C8EE3A=CreateCSM
A0C8EE4C=FindCSMbyID
A0C8EE80=FindGUIbyId
A0C8EEF6=DoIDL
A0C8EF3E=CloseCSM
A0C8EFF0=SetDepthBufferOnLCDLAYER
A0C8F03A=SetDepthBuffer
A0C8F37C=SetBrushColorToEditCOptions
A0C8F394=SetPenColorToEditCOptions
A0C8F3AA=SetAlignToEditCOptions
A0C8F3B6=SetFontToEditCOptions
A0C8F3C2=SetInvertToEditCOptions
A0C8F428=PrepareEditControl
A0C8F464=CopyOptionsToEditControl
A0C8F5D6=ConstructEditDate
A0C8F6F0=ConstructEditTime
A0C8F736=ConstructEditControl
A0C8F76E=ConstructComboBox
A0C8FF4C=AllocEQueue
A0C900E4=AddEditControlToEditQend
A0C9029C=PrepareEditCOptions
A0C91914=GetPicNByUnicodeSymbol
A0C91EB0=CreateMenu
A0C922F8=ShowMSG
A0C92326=MsgBoxError
A0C92384=MsgBoxYesNo
A0C9238E=MsgBoxOkCancel
A0C92958=CreateIdleGui
A0C92B10=GetCurGuiID
A0C92B16=IsGuiOnTop
A0C92B24=GetTopGU
A0C92BF8=CreateGUI_ID
A0C92C08=CreateGUI
A0C92C16=CreateGUI_30or2
A0C92C50=CreateGUIWithDummyCSM
A0C92C60=CreateGUIWithDummyCSM_30or2
A0C92C70=GeneralFuncF
A0C92C7E=GeneralFuncF0
A0C92C8C=GeneralFunc_flag1
A0C92C9C=GeneralFunc_flag0
A0C92CAC=SetIDLETMR
A0C92CBC=RestartIDLETM
A0C92CC8=DisableIDLETM
A0C92D08=FocusGUI
A0C92D16=UnfocusGU
A0C92D2E=DirectRedrawGUI
A0C92D3A=DirectRedrawGUI_ID
A0C92DA4=RefreshGUI
A0C92DCA=PendedRedrawGUI
A0C93C96=SetCursorToMenuItem
A0C93D1E=SetMenuItemCount
A0C956FE=GetCurMenuItem
A0C95B6E=Menu_SetItemCountDyn
A0C964E4=SetMenuItemText
A0C96B92=SetMenuItemIconArray
A0C96BC0=SetMenuItemIcon
A0C96C12=AllocMenuItem
A0C96D20=AllocMenuWS
A0C97076=SetMenuSearchCallBack
A0C97C60=MenuSetUserPointer
A0C97C64=MenuGetUserPoer
A0CA6A2C=calloc
A0CAC2A0=GetLCDLAYERByCurCepID
A0CACA04=FindCSM
A0CACFC8=SetProp2Square_v
A0CACFEE=SetProp2Square_v2
A0CAD00A=DrawRectangle
A0CAD13E=DrawRoundedFrame
A0CAE6BE=SetPropTo_Obj5
A0CAE6E8=DrawImgBW
A0CAE7A8=DrawImage2
A0CAE7CE=SetProp2ImageOrCanvas
A0CAF40C=GetPaletteAdrByColorIndex
A0CAF430=getRGBcolor
A0CAF440=getRGBbyPaletteAdr
A0CAF45E=setColor
A0CAFBCE=SetPixel
A0CAFC6E=SetPropTo_obj0x0F
A0CAFD1E=DrawLine
A0CB2DB4=DrawObject
A0CB2EA0=GetSymbolWidth
A0CB2ECA=Get_WS_width
A0CB39E0=StoreXYWHtoRECT
A0CB39F6=StoreXYXYtoRECT
A0CB3CFC=CreateInputTextDialog
A0CB60A6=KeypressOn
A0CB6164=KeypressOff
A0CB677A=IsUnlocke
A0CB69FA=KbdUnloc
A0CB6D84=KbdLoc
A0CB73EE=GetFontYSIZE
A0CB75B4=GetPITaddr
A0CB768A=CalcBitmapSize
A0CB76E8=GetImgHeight
A0CB76F8=GetImgWidth
A0CB7BCE=GetMaxDynIco
A0CB7BD2=SetDynIcon
A0CB7C42=FreeDynIcon
A0CB7C6E=IsDynIconBus
A0CB7C9A=GetPitAdrByE200Symbol
A0CB97BE=FindItemByID
A0CB97E8=GetDataOfItemByID
A0CBACE8=FeedBack_Quest
A0CD1134=GetDisconnectTim
A0CD115C=SetCurrentGPRSProfile
A0CD1190=GetCurrentGPRSProfil
A0CD8DF8=IsNoJava
A0CD94A4=StartMidlet
A0CE2D36=SetPropTo_obj0x13
A0CE2D6E=drawArc
A0CE4432=SetColor
A0CE44C8=FreeDrawObject_subobj
A0CE4510=PushDRWOBJOnLAYER
A0CE6176=LCDRedrawLAYER
A0CE6506=DrawScrollString
A0CE6C54=SetPropTo_Obj1
A0CE6CA4=DrawString
A0CE8D04=SetPropTo_obj0x17
A0CECAE4=EDIT_SetTextToFocused
A0CECB0C=EDIT_ExtractFocusedControl
A0CECB16=EDIT_StoreControlToFocused
A0CECB20=EDIT_GetFocus
A0CECB2A=EDIT_GetUnFocus
A0CECB34=EDIT_SetFocu
A0CECB3E=__A
A0CECB5C=EDIT_GetCursorPos
A0CECB66=EDIT_SetCursorPos
A0CECB7A=EDIT_GetItemNumInFocusedComboBox
A0CECBA2=EDIT_IsMarkModeActive
A0CECBB6=EDIT_GetMarkedText
A0CECBE8=EDIT_SetDate
A0CECBFC=EDIT_SetTime
A0CECC10=EDIT_GetDate
A0CECC24=EDIT_GetTime
A0CECC42=EDIT_SetTextToEditControl
A0CECC4C=ExtractEditControl
A0CECC56=StoreEditControl
A0CECC72=EDIT_RemoveEditControl
A0CECC7C=EDIT_InsertEditControl
A0CECCA8=SetSoftKey
A0CECCD8=EDIT_GetUserPoer
A0CECCF0=EDIT_SetTextInvert
A0CECCFA=EDIT_RemoveTextInvert
A0CECD36=EDIT_IsBusy
A0CECD68=EDIT_OpenOptionMenuWithUserItem
A0CF0F58=ClearClipboard
A0CF0F9E=CopyWsToClipboard
A0CF0FC2=GetClipBoard
A0CF1892=SetMLMenuItemText
A0CF1B4A=AllocMLMenuItem
A0D1EA70=SetPropTo_obj0x15
A0D1EAB2=fillTriangle
A0D70648=available0
A0D7A698=jmp_new_str2wstr
A0FC0C00=GetBuffer
A0FC0C50=RunDispatcher
A0FC0C90=RunScaner(MPv14)
A0FC12A0=GetAllPatchesByInject
A0FC3000=SpellTime
A0FC3E28=GetBuildCanvas
A0FC7300=ScreenShoot
A0FC7600=MiniGPS
A0FCF000=OpenWriteCloseFile
A0FCF050=Hex2
A0FCF0A0=StrAnsi2Uni
A0FCF0C0=StrUni2Ansi
A0FCF1B0=DrawText
A0FCF200=OpenReadCloseFile
A0FCF300=Seconds2iTime
A0FCF350=DrawPicWithCanvas
A0FCF370=DrawColorPicWithCanvas
A0FCF3A0=ProcessFiles
A0FCF450=PlayVibra
A0FD4000=AddrLibrary
A1138422=new_str2wstr
A11385B6=utf8_2ws
A11386CE=ws_2utf8
A11398B0=EEFullReadBlock
A1139988=EEFullGetBlockInfo
A11399F4=EEFullWriteBlock
A1139CB4=EEFullDeleteBlock
A1139D44=getEEFullMaxID
A1139E00=EEFullCreateBlock
A113A6A4=str_2ws
A113A7C4=ws_2str
A113AF74=GetFreeFlexSpace
A113AFAC=stat
A113AFE4=FindClose
A113B024=GetFileAttrib
A113B05C=FindFirstFile
A113B098=FindNextFile
A113B0D8=isdir
A113B108=mkdir
A113B170=rmdir
A113B1A0=SetFileAttrib
A113B1D8=GetFileStats
A113B210=unlink
A113B278=fclose
A113B2A8=fflush
A113B2D8=lseek
A113B324=fopen
A113B3A4=setfilesize
A113B414=truncate
A113B538=GetTotalFlexSpace
A113BCBC=StoreErrString
A113BE98=StoreErrInfoAndAbort
A114FE74=AmcGetAnalogDataValue
A11502A4=GetAkku
A1150308=BFC_AKKU
A1151138=SetIllumination
A11511DC=DynLight_Ptr
A11517E4=GetIlluminationDataTable
A115203C=GetEELiteBlockAddress
A1152144=getEELiteBlockSizeVersion
A11521A0=getEELiteMaxID
A11521AC=DeleteEELiteBlock
A11521D4=StartWriteEELiteBlock
A115220C=EELiteWriteBlock
A1152250=EELiteFinishWriteBlock
A115626C=Init_FLASH_MGR
A11574FC=StartCpuUsageCount
A1157534=getCpuUsedTime_if_ena
A1159514=SetVibration
A1162B04=devmenu_config_IsCheckboxOff
A1162DD8=Get_Phone_Ino
A116641C=Lisr_pasic
A11675F8=ClkAllocCPUClient
A1167628=ClkAllocClient
A1167784=ClkFreeCPUClient
A11677B0=ClkFreeClient
A11677DC=ClkSetLevel
A11678FC=ClkStateOn
A1167920=ClkStateOff
A116797C=ClkGetState
A1169360=GPIO_AllocPIN
A11695C4=PIN_Off
A11697E8=pwm_alloc_gpio
A1169B3C=GPIO_FreePIN
A1169D00=pwm_RegLisr
A1169D9C=pwm_RegLisr2
A1169E58=pwm_unk1
A1169F00=pwm_unk2
A1169F88=pwm_unk3
A116A008=pwm_unk4
A116A068=pwm_unk5
A116A0C8=pwm_unk6
A116A134=pwm_unk7
A116A1A0=pwm_unk8
A116A2B4=pwm_unk9
A116A37C=pwm_unk10
A116A478=pwm_SetFreq
A116A5C4=pwm_unk11
A116A694=pwm_unk12
A116A920=pwm_SetDutycycle
A116AA14=pwm_unk13
A116AAB0=pwm_unk14
A116AF00=Lisr_CapCom1
A116AF3C=Lisr_CapCom1_
A116AF78=Lisr_CapCom0
A116AFB4=Lisr_CapCom0_
A116AFF0=CapCom_Init
A116B394=i2cw_pmu
A116B71C=i2c_transfer
A116B768=i2c_receive
A116B7B4=i2c_
A116C064=Init_SIM
A116CB88=SwitchPhoneOff
A116CB94=RebootPhone
A1175EEC=Hisr_irdd_tas
A117635C=Init_irda
A1181208=_Tochka_AkkuCalc
A1181EB4=Akku_Init_CalibrationBlock
A11A59BC=SetCpuClockTempHi
A11A59D4=SetCpuClockLow
A11A59F4=GetCPUCloc
A11A6988=Task_MODEMAN
A11A6A08=Timer_MODEMAN
A11A8D9C=Hisr_DISPLDMA
A11A8DA4=Task_DISPLDMA
A11AB28C=i2c_callback
A11AC4B8=Register_LISR
A11AC7A0=i2c_str_value
A11AC894=Lisr_i2c_1
A11ACAD4=I2C_TASK
A11ACE30=Init_i2c
A11ACEC0=A11ACAD4
A11AD078=Lisr_KeypadUp
A11AD184=Lisr_KeypadDown
A11B404C=TVCXO_Table
A11B4274=_Tochka_AkkuCalc_VBAT
A11CF930=Init_DIF_SSC0
A120ED0C=Lisr_PhyWAS_Detection
A120FC0C=Lisr_PhyWAS_Detection_3
A120FC6C=Lisr_PhyWAS_Detection_2
A1241E08=irdd_rx
A1242070=irdd_tx
A12423AC=serial_f23
A12424A8=serial_f22
A12425E4=serial_f20
A1242698=serial_f18
A1242760=serial_f8
A12427AC=serial_f5
A12428F4=serial_f4
A1242ACC=serial_f1
A1242DB4=Init_usart
A12436E8=irdd_set_baudrate
A1243818=serial_f16
A12438E4=serial_f21
A12438F8=serial_f17
A1243900=serial_isgpio
A1243904=serial_baudrate
A1243988=serial_f14
A1243A5C=serial_f13
A1243A70=serial_f12
A1243A9C=serial_gpioset
A1243AC8=serial_f9
A1243ADC=serial_f7
A1243B1C=serial_f6
A1243BEC=serial_f3
A1243C2C=serial_f2
A1243CAC=Hisr_usart1
A1243D20=Hisr_uasart0
A124C31E=Init_L1CTRL
A124C5D6=Init_MODEM
A1258F6D=IsIncognitoCall
A1259552=IsCalling
A1259D6A=GetTypeOfCall
A125D81C=Lisr_sim_3
A125D930=Lisr_sim
A125DCB0=Lisr_sim_2
A125DCDC=TIMER_SIM
A125EACC=Lisr_Usart0_2
A125ECC8=Lisr_usart1_2
A125EF64=Lisr_Usart0_1
A125F1B4=Lisr_usart1
A125F794=Lisr_Usart0_5
A125F824=Lisr_usart1_5
A125F8B4=Lisr_Usart0_6
A125F92C=Lisr_usart1_6
A125F9A4=Lisr_Usart0_3
A125FA74=Lisr_usart1_3
A125FB44=Lisr_Usart0_4
A125FC58=Lisr_usart1_4
A125FDF0=Lisr_unk
A1261138=Init_USB
A1262198=Lisr_usb
A1262218=RegisterCepidForSocketWork
A1262C48=RequestLMANConnect
A1264780=bind
A12648CE=connect
A12649C4=shutdown
A1264A48=closesocket
A1264AF2=recv
A1264DCE=send
A12652EE=async_gethostbyname
A126A4A0=str2i
A1278960=Rand
A127AC90=IsGPRSConnecte
A127B53C=GPRS_OnOff
A127EC10=Lisr_RTC
A1283D44=__16htons
A1283D50=htonl
A128EE20=Lisr_AudioVCtrl
A128EE48=Lisr_AudioPlay
A128EE98=Lisr_Audio_Rec
A12A2570=GetNetAccessMode
A13491F4=GBSPROC_CHIPKARTE_PL
A136B2F6=GBSPROC_SMS_SIMIF_SM
A14A9EEA=BN_bin2bn
A1559A08=GetLP
A1559EB4=__LGP_SetUserText
A159C444=RSARSA_new_method
A159C4D2=RSA_free
A159C69E=RSA_sign
A15CAD30=Base64Encode
A15CADE0=Base64Decode
A15D46C0=MD5_Update
A15D4958=MD5_Final
A15D4A50=MD5_Init
A15D53E0=MD5_Hash
A15D79BA=SHA1_Update
A15D7BB6=SHA1_Final
A15D7CD6=SHA1_Init
A15EBDC0=png_set_sig_bytes
A15EBE20=png_check_sig
A15EBEEC=png_infoppng_create_info_struct
A15EC1DC=png_ppng_get_io_ptr
A15EC440=png_u_32png_get_valid
A15EC452=png_u_32png_get_rowbytes
A15EC53C=png_u_32png_get_IHDR
A15EC8DE=png_ppng_malloc
A15EC9DC=png_structppng_create_read_struct_2
A15ECB18=png_structppng_create_read_struct
A15ECC56=png_read_info
A15ED0A6=png_read_update_info
A15ED0DE=png_read_row
A15ED546=png_read_image
A15ED588=png_read_end
A15ED950=png_destroy_read_struct
A15ED9EE=png_set_read_fn
A15EDAEC=png_set_strip_16
A15EDB16=png_set_palette_to_rgb
A15EDB24=png_set_gray_1_2_4_to_8
A15EDB32=png_set_tRNS_to_alpha
A15EDB40=png_set_gray_to_rgb
A15EE81E=png_set_packing
A15EE888=png_set_filler
A15EE8EA=png_set_invert_mono
A16101BC=snprintf
A1610210=sprintf
A16135B0=jmp_CreateCSM
A16EE76C=MemChr
A16EE790=memcmp
A16EEB38=srand
A16EEC14=zeromem
A16EEC5C=memcpy
A16EED14=memmove
A16EEDB8=memset
A16EEDD0=sdiv
A16EEEA8=DivBy10
A16EEEEC=HexToDec
A16EEF5C=sscanf
A16EF378=strcat
A16EF398=strchr
A16EF3BC=strcmp
A16EF458=strcpy
A16EF4A8=strpbrk
A16EF4D8=strlen
A16EF524=strncat
A16EF554=strncmp
A16EF5A4=strncpy
A16EF620=strrchr
A16EF638=strstr
A16EF6B4=strtol
A16EF730=strtoul
A16EF960=setjmp
A16EF988=longjmp
A17129D6=GetScreenSaverRAM
A1712E74=IDLE_onMessage
A171422C=IDLE_onCreate
A17143F0=IDLE_onClose
A1714692=sininsert_oncreate
A1714A40=siminsert_onmessage
A1715058=IsDirectCallActive
A171560A=AddIconToIconbar
A1715C82=DrawCanvas
A1715CA8=DrawImg
A17171A8=loadprocess_onmesage
A1719522=MS_Wallpaper_Flush
A1719C0C=IsGPRSEnable
A1719DC0=ResetGPRSTraffic
A1719DFA=RefreshGPRSTraffic
A1719E18=GetGPRSTrafficPointer
A171B136=ReadFlashSMS
A171C92E=BuildCanvas
A171CEDA=DrawMainScreen
A171E2C4=freeUSS
A171E300=GetTypeUSS
A171E310=SetUSSD
A171E818=HasFlashSMS
A171F68C=HasNewSMS
A171FAFA=DrawScreenSaver
A1720204=IsScreenSaver
A1725642=ScreenRedRaw
A1731CDC=jmp_DoIdle
A1731D30=jmp_GBS_SendMessage
A1731D50=jmp_IllumTimeRequest
A1732120=jmp_CreateIdleGui
A173212C=jmp_SetCpuClockTempHi
A1733654=jmp_CSM_InsertSIM
A80852B4=A17143F0
A868ABC4=CSM_root
[Patches]
Count=0
[Snappoints]
[Sidebar]
Count=1
Type0=5
Address0=-1591461628
[Watches]
Count=0
[AddressHistory]
Count=9
0=A0BF55B4
1=A0040B54
2=A11B4274
3=A11817DC
4=A86C10B8  
5=A118120C          
6=A11B4058                            
7=A1150374                                                            
8=A0000000                                                                                          
9=A080012D                                                                                      
10=A0947EAC                                                                                                                                                
11=F6000000                                                                                                                                                                                                                                  
12=F5000000                                                                                                                                                                                                                                                                  
13=F8000000                                                                                                                                                                                                                                                                                                                                                                            
14=F7000000                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
15=FA00F000                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
