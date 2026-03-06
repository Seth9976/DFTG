// 函数名称: sub_483110
// 虚拟地址: 0x483110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_483110(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 1 u<= 9)
    if (arg1 - 1 u<= 9)
        switch (arg1)
            case 1
                return "white"
            case 2
                return &data_5eddec
            case 3
                return "cyan"
            case 4
                return "brown"
            case 5
                return "green"
            case 6
                return "yellow"
            case 7
                return "purple"
            case 9
                return "black"
            case 0xa
                return "orange"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x1e9, 
        "DieColorToString")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
