// 函数名称: sub_4f97b0
// 虚拟地址: 0x4f97b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4f97b0(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x68)
    int32_t* ecx = *(arg1 + 0x68)
    int32_t eax
    
    if (ecx != 0)
        eax = sub_4984f0(ecx, *(arg1 + 0x6c) * 0x68)
        *(arg1 + 0x68) = 0
    
    void* edx_2 = data_114e818
    
    if (edx_2 != 0)
        void* edx_3 = *(edx_2 + 0xc)
        uint32_t result = zx.d(*(arg1 + 0x90))
        int32_t ecx_1 = *(edx_3 + 0xc)
        *(edx_3 + 0xc) = result
        *(arg1 + 0x90) = ecx_1
        *(edx_3 + 0x10) -= 1
        return result
    
    sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
