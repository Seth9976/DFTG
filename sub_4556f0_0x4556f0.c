// 函数名称: sub_4556f0
// 虚拟地址: 0x4556f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __fastcallsub_4556f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_5 = *arg1
    int32_t eax_5 = *arg1
    
    if (eax_5 != 2)
        sub_489550(eax_5 - 2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0xd87, "EffectIsRunning")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    int32_t edx = arg1[1]
    
    if (edx != 0)
        uint32_t eax_3 = zx.d(edx.w)
        
        if (eax_3 u< data_6c9ba0)
            void* const result = data_6c9b9c + eax_3 * 0x18
            
            if (*(result + 0x14) != edx)
                result = nullptr
            
            result.b = result != 0
            return result
    
    int32_t eax_2
    eax_2.b = false
    return 0
}
