// 函数名称: sub_510770
// 虚拟地址: 0x510770
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_510770(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u<= 0xff)
    if (arg1 u<= 0xff)
        if (0xff - arg1 s> 0)
            sub_579a90((arg1 << 3) + &data_11510cc, (arg1 << 3) + &data_11510c4, (0xff - arg1) << 3)
        
        *((arg1 << 3) + &data_11510c8) = 0
        *((arg1 << 3) + &data_11510c4) = arg1 + 0x64
        return arg1 + 0x64
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x946, "ToolDataAddItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
