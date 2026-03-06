// 函数名称: sub_4a7d60
// 虚拟地址: 0x4a7d60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a7d60(int32_t arg1)
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    sub_4bc830(&data_63e5a8, &i_1)
    void* i = i_1
    
    if (i != 0xffffffff)
        int32_t esi_1 = data_642620
        
        do
            if (*(i + 0xff4) == esi_1 && *(i + 0x1130) == 0 && *(i + 0xff8) == arg1)
                return i
            
            sub_4bc830(&data_63e5a8, &i_1)
            i = i_1
        while (i != 0xffffffff)
    
    sub_489550(i, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2026, "UI2GetIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
