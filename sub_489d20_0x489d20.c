// 函数名称: sub_489d20
// 虚拟地址: 0x489d20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_489d20(int32_t arg1)
{
    // 第一条实际指令: void var_10
    void var_10
    BOOL result = sub_489e40(&var_10)
    
    if (result.b == 0)
        return result
    
    if (arg1 u> 6)
        sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\xplatformpc.cpp", 0x176, 
            "XSetCursor")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    switch (arg1)
        case 0
            return SetCursor(nullptr)
        case 1
            return SetCursor(LoadCursorA(nullptr, 0x7f00))
        case 2
            return SetCursor(LoadCursorA(nullptr, 0x7f89))
        case 3
            return SetCursor(LoadCursorA(nullptr, 0x7f84))
        case 4
            return SetCursor(LoadCursorA(nullptr, 0x7f85))
        case 5
            return SetCursor(LoadCursorA(nullptr, 0x7f82))
        case 6
            return SetCursor(LoadCursorA(nullptr, 0x7f83))
}
