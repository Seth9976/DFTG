// 函数名称: sub_53a3b0
// 虚拟地址: 0x53a3b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_53a3b0(int32_t arg1)
{
    // 第一条实际指令: int32_t i = data_629fb0
    int32_t i = data_629fb0
    int32_t* edx = &data_629fb0
    
    while (i != 0)
        if (i == arg1)
            return edx[1]
        
        i = edx[2]
        edx = &edx[2]
    
    sub_489550(i, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x20e, 
        "Dx11FormatFromTextureFormat")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
