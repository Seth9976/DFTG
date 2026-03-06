// 函数名称: sub_4274a0
// 虚拟地址: 0x4274a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4274a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    void* ecx = data_6cfe4c
    
    if (ecx != 0)
        eax = sub_426880(ecx + 0x848, eax)
        int32_t* edx_1 = data_6cfe4c
        eax[0x74].b = 1
        
        if (edx_1 != 0)
            eax[0x76] = *edx_1
            int32_t result = edx_1[1]
            eax[0x77] = result
            return result
    
    sub_489550(eax, &data_5b2591, "gClient", "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
        0x75, "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
