// 函数名称: sub_435cc0
// 虚拟地址: 0x435cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_435cc0(int32_t* arg1, char arg2, float arg3 @ xmm1)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    
    if (ecx == 0)
        return 
    
    void* eax_1 = data_aca1ec
    int32_t esi_1 = arg1[3]
    int32_t var_18 = 0
    int32_t var_14_1 = 0
    uint128_t xmm1 = zx.o(*(eax_1 + 0x18))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x14)))
    int32_t var_28 = 0
    int32_t var_24_1 = 0
    int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
    int32_t var_10_1 = xmm2_2
    int32_t var_c_1 = xmm1_1
    int32_t var_20_1 = xmm2_2
    int32_t var_1c_1 = xmm1_1
    void* eax_2 = sub_435c50(ecx)
    int32_t* ecx_1 = *(eax_2 + 4)
    
    if (ecx_1 != 0)
        goto label_435d50
    
    int32_t ecx_2 = *(eax_2 + 0x14)
    char const* const var_64_2
    int32_t var_60_1
    char const* const var_5c_4
    char* ecx_10
    
    if (ecx_2 == 0)
    label_436075:
        var_5c_4 = "GetDlgAsset"
        var_60_1 = 0x17cc
        ecx_10 = "def.uiPages"
    label_436084:
        var_64_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
    label_43608e:
        sub_489550(eax_2, &data_5b2591, ecx_10, var_64_2, var_60_1, var_5c_4)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    ecx_1 = *(ecx_2 + (esi_1 << 2))
    label_435d50:
    int32_t* edi_1 = *ecx_1
    
    if (arg1[1] == 0 && *arg1 != 0x21)
        sub_49ec40(&var_18, &arg1[1], "dialog (retired)", edi_1, &var_18, &var_28, 0x32c8, nullptr, 1)
        int32_t var_74_1 = 0xffffffff
        sub_4a8570(arg1[1])
    
    int32_t ecx_4 = *arg1
    int32_t eax_4
    
    if (ecx_4 != 0x21)
        eax_4 = *(sub_435c50(ecx_4) + 0xc)
    else
        eax_4 = 0x2af8
    
    sub_49ec40(&var_18, &arg1[1], "dialog", edi_1, &var_18, &var_28, eax_4, nullptr, 1)
    
    if (arg2 != 0)
        int32_t var_5c_1 = 0xffffffff
        sub_4a8570(arg1[1])
    
    TEB* fsbase
    void* edi_2 = *fsbase->ThreadLocalStoragePointer
    
    if (data_15129bc s> *(edi_2 + 4))
        __Init_thread_header(&data_15129bc)
        
        if (data_15129bc == 0xffffffff)
            int32_t eax_9 = data_114e80c
            data_15129c4 = eax_9
            data_114e80c = eax_9 + 1
            int32_t eax_11 = data_114e808
            data_15129c0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_15129d8 = "gfxHigh"
            data_15129cc = eax_11
            data_114e808 = &data_15129c0
            __Init_thread_footer(&data_15129bc)
    
    if (data_15129dc s> *(edi_2 + 4))
        __Init_thread_header(&data_15129dc)
        
        if (data_15129dc == 0xffffffff)
            int32_t eax_13 = data_114e80c
            data_15129e4 = eax_13
            data_114e80c = eax_13 + 1
            int32_t eax_15 = data_114e808
            data_15129e0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_15129f8 = "gfxLow"
            data_15129ec = eax_15
            data_114e808 = &data_15129e0
            __Init_thread_footer(&data_15129dc)
    
    int32_t eax_17 = *(sub_435c50(*arg1) + 0x14)
    int32_t performanceCount
    
    if (eax_17 != 0)
        int32_t edi_3 = arg1[3]
        int32_t performanceCount_3 = arg1[1]
        performanceCount = performanceCount_3
        
        if (edi_3 == 0)
            int32_t var_5c_2 = 0xffffffff
            sub_4a8570(performanceCount_3)
            performanceCount_3 = performanceCount
        
        if (*(eax_17 + (edi_3 << 2) + 4) == 0)
            int32_t var_5c_3 = 0xffffffff
            sub_4a8570(performanceCount_3)
    
    eax_2 = data_6d00d0
    
    if (eax_2 == 0)
        var_5c_4 = "GetLocalSettings"
        var_60_1 = 0x24c
        var_64_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_10 = "gGameSettings.localSettings"
        goto label_43608e
    
    *(eax_2 + 0xc)
    int32_t var_5c_5 = 0xffffffff
    sub_4a8570(arg1[1])
    eax_2 = data_6cfe4c
    
    if (eax_2 == 0)
        var_5c_4 = "GetClient"
        var_60_1 = 0x75
        var_64_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_10 = "gClient"
        goto label_43608e
    
    if (*(eax_2 + 0xa7c) != 0)
        int32_t var_5c_6 = 0xffffffff
        sub_4a8570(arg1[1])
    
    data_114e810 = 0
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    eax_2 = *(sub_435c50(*arg1) + 8)
    
    if (eax_2 == 0)
        var_5c_4 = "GetDlgUpdate"
        var_60_1 = 0x17e0
        ecx_10 = "def.updateFn"
        goto label_436084
    
    eax_2(arg1[1])
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_5 = performanceCount
    int32_t var_44
    int32_t var_34
    uint32_t eax_21 = sub_489b30(performanceCount_5 - performanceCount_1, 
        sbb.d(var_44, var_34, performanceCount_5 u< performanceCount_1))
    sub_4a4740(arg1[1], 0, arg3)
    int32_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    int32_t performanceCount_4 = performanceCount_2
    int32_t var_2c
    uint32_t eax = sub_489b30(performanceCount_4 - performanceCount_1, 
        sbb.d(var_2c, var_34, performanceCount_4 u< performanceCount_1))
    
    if (eax + eax_21 s<= 0x64)
        return 
    
    int32_t esi_2 = arg1[3]
    void* eax_24 = sub_435c50(*arg1)
    int32_t* eax_25 = *(eax_24 + 4)
    
    if (eax_25 == 0)
        eax_2 = *(eax_24 + 0x14)
        
        if (eax_2 == 0)
            goto label_436075
        
        eax_25 = *(eax_2 + (esi_2 << 2))
    
    char* const ecx_19 = &data_5b2591
    char* eax_27 = *(*eax_25 + 0x20)
    
    if (eax_27 != 0)
        ecx_19 = eax_27
    
    char* const var_5c_13 = ecx_19
    int32_t var_60_4 = data_114e810
    uint32_t var_64_3 = eax
    uint32_t var_68_3 = eax_21
    sub_4892e0("slow ui frame user:%dms update:%dms numUpdates:%d -- %s")
}
