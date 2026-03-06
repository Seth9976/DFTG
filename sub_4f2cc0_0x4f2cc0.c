// 函数名称: sub_4f2cc0
// 虚拟地址: 0x4f2cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4f2cc0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = *(arg3 + 0x2c)
    int32_t* edi = *(arg3 + 0x2c)
    int32_t var_8 = arg2
    arg2.b = 0
    int32_t eax = sub_4f13e0(edi, arg2.b)
    void* ebx = data_114e818
    
    if (ebx == 0)
        sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* ebx_1 = *(ebx + 4)
    ebx_1[3] += 1
    int32_t* result = *ebx_1
    
    if (result == 0)
        sub_4f49a0(ebx_1)
        result = *ebx_1
    
    *ebx_1 = *result
    result[3] = var_8
    result[4] = arg4
    result[5] = 0x3f800000
    result[6] = 0x3f800000
    result[7] = 0
    result[8] = 0
    result[9] = 0x3f800000
    result[0x2b] = 0
    result[0x2c] = 0
    void* eax_4 = sub_4f1830(edi, result)
    bool cond:0 = result[7] != 2
    *result = 1f / (_mm_cvtepi32_ps(zx.o(**(eax_4 + 0x10))) f/ *eax_4)
    
    if (not(cond:0))
        *result = 0
    
    result[1] = 0
    result[2] = 0
    int32_t* eax_6 = sub_498440(0xc)
    eax_6[3] += 1
    int32_t* ecx_4 = *eax_6
    
    if (ecx_4 == 0)
        sub_4982d0(eax_6)
        ecx_4 = *eax_6
    
    *eax_6 = *ecx_4
    ecx_4[2] = 0
    *ecx_4 = result
    ecx_4[1] = 0
    ecx_4[2] = edi[2]
    void* eax_9 = edi[2]
    
    if (eax_9 == 0)
        edi[3] += 1
        edi[1] = ecx_4
        edi[2] = ecx_4
        return result
    
    *(eax_9 + 4) = ecx_4
    edi[3] += 1
    edi[2] = ecx_4
    return result
}
