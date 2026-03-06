// 函数名称: sub_4efc60
// 虚拟地址: 0x4efc60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4efc60(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t esi = *(arg3 + 0x3f4)
    int32_t esi = *(arg3 + 0x3f4)
    int32_t result = 0
    
    if (esi s> 0)
        void* ecx = arg3 + 0x3f8
        
        while (*ecx != arg2)
            result += 1
            ecx += 0x14
            
            if (result s>= esi)
                return result
        
        void* eax = *(ecx + 0xc)
        
        if (*(eax + 0x10) != 0xf)
            sub_489550(eax, &data_5b2591, "renderState.renderStateType->defType == DT_ASSET_PTR", 
                "d:\ax\trunk\ax2017\engine\material.cpp", 0x30d, "MaterialStateReplaceTexture")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = arg4
        *(ecx + 0x10) = result
    
    return result
}
