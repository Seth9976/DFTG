// 函数名称: sub_477300
// 虚拟地址: 0x477300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_477300(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t esi = *arg1
    
    if (esi == 0)
        return 
    
    double xmm0_1 = __ltod3((&data_709178)[esi * 2].d, (&data_709178)[esi * 2]:4)
    xmm0_1 - 1000000000.0
    int32_t eax
    eax:1.b = (xmm0_1 == 1000000000.0 ? 1 : 0) << 6
        | (is_unordered.q(xmm0_1, 1000000000.0) ? 1 : 0) << 2 | (xmm0_1 < 1000000000.0 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (not(p_2))
        var_10 = "TakeLock"
        var_14 = 0x735d
        var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_1 = "gNotifies.locks[timer.lock].lockTime != 1e9"
    label_47737c:
        sub_489550(eax, &data_5b2591, ecx_1, var_18, var_14, var_10)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* ecx_2 = data_6cfe4c
    
    if (ecx_2 == 0)
        var_10 = "GetClient"
        var_14 = 0x75
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
        goto label_47737c
    
    int32_t eax_2
    int32_t edx_2
    edx_2:eax_2 = sx.q(arg1[1])
    (&data_709178)[esi * 2].d = eax_2 + *ecx_2
    (&data_709178)[esi * 2]:4 = adc.d(edx_2, ecx_2[1], eax_2 + *ecx_2 u< eax_2)
}
