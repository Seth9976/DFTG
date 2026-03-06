// 函数名称: sub_521840
// 虚拟地址: 0x521840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __thiscallsub_521840(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t temp1 = arg2
    int32_t temp1 = arg2
    arg2 -= 1
    int32_t eax
    
    if (temp1 == 1)
        if (SwapBuffers(*(arg1 + 8)) != 0)
            return sub_51c6e0("EndScene opengl error check")
        
        enum WIN32_ERROR var_8_2 = GetLastError()
        sub_489550(sub_4892e0("openGL present error: %d"), &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x12c7, "OpenGLInterface::APIPresent")
    else
        sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x12c0, 
            "OpenGLInterface::APIPresent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
