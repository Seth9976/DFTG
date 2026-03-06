// 函数名称: sub_553ae0
// 虚拟地址: 0x553ae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_553ae0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == arg2)
    if (arg1 == arg2)
        return 
    
    int32_t* eax_1 = sub_4c8c70(data_11e6050)
    int32_t ecx_1 = eax_1[2]
    int32_t var_1a4_1
    char const* const var_1a0_1
    char* ecx_2
    
    if (arg1 s>= ecx_1)
        var_1a0_1 = "MoveItem"
        var_1a4_1 = 0x932
        ecx_2 = "source < layout.numElements"
    label_553bba:
        sub_489550(eax_1, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 
            var_1a4_1, var_1a0_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (arg2 s>= ecx_1)
        var_1a0_1 = "MoveItem"
        var_1a4_1 = 0x933
        ecx_2 = "dest < layout.numElements"
        goto label_553bba
    
    void* ecx_3 = *eax_1
    char* eax_3 = arg1 * 0x178 + ecx_3
    void var_18c
    __builtin_memcpy(&var_18c, eax_3, 0x178)
    int32_t esi_2 = arg2 * 0x178
    char* var_1a8_1
    char* var_1a4_2
    void* var_1a0_2
    
    if (arg1 s>= arg2)
        char* ecx_5 = ecx_3 + esi_2
        var_1a0_2 = (arg1 - arg2) * 0x178
        var_1a4_2 = ecx_5
        var_1a8_1 = &ecx_5[0x178]
    else
        var_1a0_2 = (arg2 - arg1) * 0x178
        var_1a4_2 = &eax_3[0x178]
        var_1a8_1 = eax_3
    
    sub_579a90(var_1a8_1, var_1a4_2, var_1a0_2)
    __builtin_memcpy(*eax_1 + esi_2, &var_18c, 0x178)
}
