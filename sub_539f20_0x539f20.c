// 函数名称: sub_539f20
// 虚拟地址: 0x539f20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_539f20(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    eax[3] += arg3
    
    if (*eax == 0)
        int32_t* eax_1 = *(arg1 + 8)
        return (*(*eax_1 + 0x3c))(eax_1, eax[6], 0)
    
    sub_489550(eax, &data_5b2591, "bufferData->mBufferType == DX11BUFFER_VERTEX", 
        "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x149, 
        "Dx11GraphicsInterface::UnlockVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
