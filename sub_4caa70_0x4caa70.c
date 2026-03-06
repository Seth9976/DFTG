// 函数名称: sub_4caa70
// 虚拟地址: 0x4caa70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4caa70(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x1900)
    int32_t edx = *(arg1 + 0x1900)
    int32_t eax
    
    if (edx s<= 0)
        sub_489550(eax, &data_5b2591, "stack.numEntries > 0", "d:\ax\trunk\ax2017\engine\uidef.cpp", 
            0x6a2, "PopOne")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edx_1 = edx - 1
    
    if (edx - 1 s< 0)
        return 
    
    void* ecx_1 = arg1 + 0x60 + edx_1 * 0x64
    int32_t temp1_1
    
    do
        eax = *ecx_1
        
        if (eax s>= 0)
            if (eax != 1)
                *ecx_1 = eax - 1
            else
                *(arg1 + 0x1900) -= 1
        
        ecx_1 -= 0x64
        temp1_1 = edx_1
        edx_1 -= 1
    while (temp1_1 - 1 s>= 0)
}
