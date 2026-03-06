// 函数名称: sub_4b9c10
// 虚拟地址: 0x4b9c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __fastcallsub_4b9c10(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0xfec)
    int32_t eax = *(arg1 + 0xfec)
    
    if (eax == 2)
        void* eax_1 = sub_49ea50(arg1, 0)
        *(eax_1 + 0x10ac)
        *(eax_1 + 0x10a4)
        return eax_1
    
    if (eax == 3)
        float eax_2
        int32_t edx
        eax_2, edx = sub_4a0910(arg1)
        int32_t var_8 = edx
        return eax_2
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3dfd, 
        "UI2GetScrollDeltaAmount")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
