// 函数名称: sub_47ce50
// 虚拟地址: 0x47ce50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_47ce50(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* esi_2
    void* esi_2
    
    if (arg1 != 4)
        if (arg1 != 5)
            int32_t eax
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x8380, "OpponentGetOrAllocDeployAssign")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t ecx_1 = *(arg2 + 0x26f0)
        
        if (ecx_1 == 0)
            *(arg2 + 0x26f0) = 1
            _memset(arg2 + 0x1a70, ecx_1.b, 0xc8)
            return arg2 + 0x1a70
        
        int32_t eax_6 = ecx_1 * 0xc8
        esi_2 = arg2 + 0x19a8 + eax_6
        
        if (*(esi_2 + 0x1c) == 1)
            esi_2 = arg2 + 0x1a70 + eax_6
            *(arg2 + 0x26f0) = ecx_1 + 1
            _memset(esi_2, 0, 0xc8)
    else
        int32_t ecx = *(arg2 + 0x1920)
        
        if (ecx == 0)
            *(arg2 + 0x1920) = 1
            _memset(arg2 + 0xca0, ecx.b, 0xc8)
            return arg2 + 0xca0
        
        int32_t eax_2 = ecx * 0xc8
        esi_2 = arg2 + 0xbd8 + eax_2
        
        if (*(esi_2 + 0x1c) == 1)
            void* esi_4 = arg2 + 0xca0 + eax_2
            *(arg2 + 0x1920) = ecx + 1
            _memset(esi_4, 0, 0xc8)
            return esi_4
    
    return esi_2
}
