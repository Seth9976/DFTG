// 函数名称: sub_513230
// 虚拟地址: 0x513230
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_513230(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 1 u<= 8)
    if (arg1 - 1 u<= 8)
        switch (arg1)
            case 1
                return "Image"
            case 2
                return "Table"
            case 3
                return "Text"
            case 4
                return "Region"
            case 5
                return "Button"
            case 6
                return "Group"
            case 9
                return "Particle"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xe7d, 
        "ToUITypeStr")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
