// 函数名称: sub_51e900
// 虚拟地址: 0x51e900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __thiscallsub_51e900(void* arg1, int32_t arg2, uint32_t arg3, void* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: if (*(arg1 + 0x425c) s> 0)
    if (*(arg1 + 0x425c) s> 0)
        return 
    
    int32_t edi_1 = *(data_1151adc + 0x404c)
    
    if (edi_1 == 0xffffffff)
        return 
    
    int32_t* eax_2 = sub_5232e0(arg1 + 0x4240, arg3)
    void* eax_3 = data_1151adc
    int32_t ecx_1 = *eax_2
    
    if (*(eax_3 + 0x4090) != ecx_1)
        *(eax_3 + 0x4090) = ecx_1
        (*__glewBindBuffer)(0x8892, ecx_1)
        eax_3 = data_114ec70
        *(eax_3 + 0x10) += 1
    
    void* eax_5 = sub_51e0b0(eax_3.b, edi_1, eax_2, arg4)
    
    if (eax_5.b == 0)
        sub_51e3e0(eax_5, arg5, edi_1, 0)
        
        if (arg4 != 0)
            (*__glewBindBuffer)(0x8893, *sub_5232e0(arg1 + 0x4240, arg4))
        
        if (arg8 != 0)
            int32_t* eax_9 = sub_5232e0(arg1 + 0x4240, arg8)
            sub_51e3e0(sub_51c7c0(*eax_9), eax_9[0x37], edi_1, 1)
    
    uint32_t mode = *((arg2 << 2) + &data_5d3698)
    int32_t ebx_2
    
    if (arg4 == 0)
        ebx_2 = arg9
        int32_t first = eax_2[0x4e]
        
        if (ebx_2 s< 1)
            glDrawArrays(mode, first, arg7)
        else
            (*__glewDrawArraysInstanced)(mode, first, arg7, ebx_2)
    else
        if (arg2 - 1 u> 4)
            sub_489550(arg2 - 1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 
                0x9f4, "OpenGLInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t edi_2
        
        switch (arg2)
            case 1
                edi_2 = arg6
            case 2
                edi_2 = arg6 * 2
            case 3
                edi_2 = arg6 + 1
            case 4
                edi_2 = arg6 * 3
            case 5
                edi_2 = arg6 + 2
        
        int32_t* eax_12 = sub_5232e0(arg1 + 0x4240, arg4)
        ebx_2 = arg9
        int32_t edx_4
        edx_4.b = *(eax_12 + 0x13e) != 0
        
        if (ebx_2 s< 1)
            int32_t ecx_10 = eax_12[0x4e]
            (*__glewDrawRangeElements)(mode, ecx_10, arg7 + ecx_10, edi_2, (edx_4 << 1) + 0x1403, 0)
        else
            (*__glewDrawElementsInstanced)(mode, edi_2, (edx_4 << 1) + 0x1403, 0, ebx_2)
    
    void* ecx_12 = data_114ec70
    int32_t edx_7 = 1
    
    if (ebx_2 s> 0)
        edx_7 = ebx_2
    
    *(ecx_12 + 0xc) += edx_7 * arg7
    *(ecx_12 + 8) += edx_7 * arg6
    *(ecx_12 + 4) += 1
}
