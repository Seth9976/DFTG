// 函数名称: sub_539f90
// 虚拟地址: 0x539f90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_539f90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    
    if (*eax == 1)
        int32_t* eax_1 = *(arg1 + 8)
        return (*(*eax_1 + 0x3c))(eax_1, eax[6], 0)
    
    sub_489550(eax, &data_5b2591, "bufferData->mBufferType == DX11BUFFER_INDEX", 
        "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x151, 
        "Dx11GraphicsInterface::UnlockIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
