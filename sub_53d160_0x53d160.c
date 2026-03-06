// 函数名称: sub_53d160
// 虚拟地址: 0x53d160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_53d160(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t temp1 = arg2
    int32_t temp1 = arg2
    arg2 -= 1
    
    if (temp1 == 1)
        return (*(*arg1 + 0x88))(arg1[4], arg1[5])
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x88e, 
        "Dx11GraphicsInterface::RenderTargetSetMonitorTarget")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
