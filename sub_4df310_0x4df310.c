// 函数名称: sub_4df310
// 虚拟地址: 0x4df310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4df310()
{
    // 第一条实际指令: void* ecx = data_114ec70
    void* ecx = data_114ec70
    int32_t eax = *(ecx + 0x24c)
    int32_t var_c
    char const* const var_8
    char* ecx_1
    
    if (eax s> 0)
        *(ecx + 0x24c) = eax - 1
        
        if (eax != 1)
            void* ecx_4 = ecx + (eax - 1) * 0x14
            eax = *(ecx_4 + 0x10c)
            
            if (eax != 2)
                if (eax == 1)
                    return sub_4dedb0(*(ecx_4 + 0x110))
                
                var_8 = "RendererPopRT"
                var_c = 0x39e
                ecx_1 = "Halt"
            else
                if (*(ecx_4 + 0x114) != 0)
                    uint32_t eax_9 = zx.d(*(ecx_4 + 0x11c))
                    return sub_4ded00(eax_9, *(ecx_4 + 0x118), *(ecx_4 + 0x114), eax_9.b)
                
                var_8 = "RendererPopRT"
                var_c = 0x395
                ecx_1 = "rt.texColor"
        else
            if (data_114e7ec == 5)
                return sub_4f5710(0)
            
            int32_t eax_2 = *(ecx + 0xf0)
            *(ecx + 0x24c) = 0
            
            if (eax_2 == 1)
                return sub_4dedb0(*(ecx + 0xf4))
            
            eax = eax_2 - 2
            
            if (eax_2 == 2)
                uint32_t eax_4 = zx.d(*(ecx + 0x108))
                return sub_4ded00(eax_4, *(ecx + 0x104), *(ecx + 0x100), eax_4.b)
            
            var_8 = "RendererRestoreMainRT"
            var_c = 0x371
            ecx_1 = "Halt"
    else
        var_8 = "RendererPopRT"
        var_c = 0x381
        ecx_1 = "gpRenderAppData->renderTargetStackDepth > 0"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\renderer.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
