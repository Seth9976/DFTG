// 函数名称: sub_4d8a70
// 虚拟地址: 0x4d8a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4d8a70(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) == 0)
    if (*(arg1 + 4) == 0)
        return arg1
    
    sub_489550(arg1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\spine.cpp", 0x100, 
        "TggAttachmentLoader_disposeAttachment")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
