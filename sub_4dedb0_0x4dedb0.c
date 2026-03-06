// 函数名称: sub_4dedb0
// 虚拟地址: 0x4dedb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4dedb0(int32_t arg1)
{
    // 第一条实际指令: if (data_114e7d9 != 0)
    if (data_114e7d9 != 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\renderer.cpp", 0x28a, "GraphicsSetMainRT")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4f5710(0)
    (*(*data_114ec78 + 0x84))(arg1)
    void* result = data_114ec70
    *(result + 0xe5) = 0
    
    if (data_aca614 == 0)
        return result
    
    data_aca614 = 0
    return sub_4924f0(&data_aca234) __tailcall
}
