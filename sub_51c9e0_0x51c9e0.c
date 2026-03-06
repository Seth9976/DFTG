// 函数名称: sub_51c9e0
// 虚拟地址: 0x51c9e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_51c9e0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: if (arg3 s>= 0x400)
    if (arg3 s>= 0x400)
        sub_489550(arg1, &data_5b2591, "registerIndex < MAX_UNIFORMS", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x382, "GLDupCheck_glUniform3fv")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* edx = arg4
    char* result = data_1151adc + 0x28
    int32_t ecx = arg3 << 4
    int32_t esi_1 = arg2 * 0xc
    char** ecx_1 = &result[ecx]
    int32_t i_1 = esi_1 - 4
    
    if (esi_1 u>= 4)
        int32_t i
        
        do
            result = *ecx_1
            
            if (result != *edx)
                goto label_51ca36
            
            ecx_1 = &ecx_1[1]
            edx += 4
            i = i_1
            i_1 -= 4
        while (i u>= 4)
    
    if (i_1 != 0xfffffffc)
    label_51ca36:
        result.b = *ecx_1
        
        if (result.b != *edx)
            (*__glewUniform3fv)(arg3, arg2, arg4)
            return sub_579300(data_1151adc + ecx + 0x28, arg4, esi_1)
        
        if (i_1 != 0xfffffffd)
            result.b = *(ecx_1 + 1)
            
            if (result.b != *(edx + 1))
                (*__glewUniform3fv)(arg3, arg2, arg4)
                return sub_579300(data_1151adc + ecx + 0x28, arg4, esi_1)
            
            if (i_1 != 0xfffffffe)
                result.b = *(ecx_1 + 2)
                
                if (result.b != *(edx + 2))
                    (*__glewUniform3fv)(arg3, arg2, arg4)
                    return sub_579300(data_1151adc + ecx + 0x28, arg4, esi_1)
                
                if (i_1 != 0xffffffff)
                    result.b = *(ecx_1 + 3)
                    
                    if (result.b != *(edx + 3))
                        (*__glewUniform3fv)(arg3, arg2, arg4)
                        return sub_579300(data_1151adc + ecx + 0x28, arg4, esi_1)
    
    return result
}
