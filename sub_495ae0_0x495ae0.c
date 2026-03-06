// 函数名称: sub_495ae0
// 虚拟地址: 0x495ae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_495ae0()
{
    // 第一条实际指令: void* result = data_114e7d4
    void* result = data_114e7d4
    
    if (result != 0)
        int32_t ecx_1 = data_114e7d0
        int32_t edx_1
        
        if (ecx_1 s>= 0)
            edx_1 = data_c4a778
            result += ecx_1
        
        int32_t var_c
        char* ecx_4
        
        if (ecx_1 s< 0 || result s> edx_1)
            char const* const var_8_1 = "RenderDrawInstancedMeshes"
            var_c = 0x926
            ecx_4 = "sortIndex >= 0 && sortIndex + gDraw3DData.instancedMeshCount <= gDraw3DData.renderItemCount"
        label_495b5f:
            sub_489550(result, &data_5b2591, ecx_4, "d:\ax\trunk\ax2017\engine\draw3d.cpp", var_c, 
                "RenderDrawInstancedMeshes")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = *((ecx_1 << 2) + &data_114a7c8)
        
        if (result s< 0 || result s> edx_1)
            char const* const var_8 = "RenderDrawInstancedMeshes"
            var_c = 0x929
            ecx_4 = "firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount"
            goto label_495b5f
        
        result = sub_48ffa0(sub_48f690(result * 0x180 + 0xaca778))
        data_114e7d4 = 0
    
    return result
}
