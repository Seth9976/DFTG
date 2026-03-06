// 函数名称: sub_547160
// 虚拟地址: 0x547160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_547160()
{
    // 第一条实际指令: void* result = data_1151aec
    void* result = data_1151aec
    
    if (result u> 3)
        sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\editor\editorcontrols.cpp", 
            0x507, "EditorControlsUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    switch (result)
        case nullptr, 3
            return result
        case 1
            return sub_544c70()
        case 2
            float var_c_1 = 0f
            float var_8_1 = 0f
            POINT point
            
            if ((*(data_114e840 + 0xc) & 2) == 0 || *(data_aca1f0 + 0x18) == 0)
                if (data_1151af0 == 1)
                    data_1151af0 = 0
                    ShowCursor(1)
            else if (data_1151af0 != 0)
                if (GetCursorPos(&point) != 0)
                    int32_t x = point.x
                    int32_t y = point.y
                    int32_t esi_2 = x - data_1151af4
                    int32_t edx_2 = y - data_1151af8
                    data_1151af4 = x
                    data_1151af8 = y
                    var_8_1 = _mm_cvtepi32_ps(zx.o(esi_2)) + 0f
                    var_c_1 = _mm_cvtepi32_ps(zx.o(edx_2)) + 0f
            else if (GetCursorPos(&data_1151af4) != 0)
                data_1151af0 = 1
                ShowCursor(0)
            
            int32_t ecx_1 = data_1151b4c
            data_1151b0c = data_1151b0c + var_8_1
            data_1151b10 = data_1151b10 + var_c_1
            void* eax_4 = sub_4f9740(ecx_1)
            
            if (eax_4 != 0)
                *(eax_4 + 0x2c) = *(eax_4 + 0x2c) + var_8_1
                *(eax_4 + 0x3c) = *(eax_4 + 0x3c) + var_c_1
            
            result = sub_4fd250(data_1151b54)
            
            if (result == 0)
                return result
            
            float xmm0_16 = data_1151b58 f+ data_1151b84
            float xmm2 = -1f * 200f
            float xmm3 = -0f * 200f
            data_1151b58 = xmm0_16
            point.y = sub_41f120(xmm0_16)
            float xmm0_19 = sub_41f100(data_1151b58)
            point.y = 0
            *(result + 0x40) = _mm_unpacklo_ps(xmm2 * xmm0_19 - xmm3 f* point.y + data_1151b5c + 200f, 
                xmm3 * xmm0_19 + xmm2 f* point.y + data_1151b60 + 0.00999999978f)
            *(result + 0x48) = 0
            return 0
}
