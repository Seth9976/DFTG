// 函数名称: sub_4dc340
// 虚拟地址: 0x4dc340
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4dc340(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = *arg2
    int32_t* eax_1 = *arg2
    
    if (eax_1 == 0)
        int32_t var_8_1 = arg1
        return sub_4892e0("Missing import data on '%s'")
    
    int32_t edx_1 = *eax_1
    int32_t ecx_1 = 0
    
    if (edx_1 s<= 0)
        return eax_1
    
    int32_t* eax_3 = eax_1[2] + 0x3c
    BOOL eax_4
    
    while (true)
        int32_t var_c
        char* ecx_2
        
        if (eax_3[-1] != 0)
            char const* const var_8_3 = "StructureLoad"
            var_c = 0x1b6
            ecx_2 = "pSubMesh->subMeshData.vertexBufferHandle == 0"
        else if (*eax_3 != 0)
            char const* const var_8_2 = "StructureLoad"
            var_c = 0x1b7
            ecx_2 = "pSubMesh->subMeshData.indexBufferHandle == 0"
        else
            ecx_1 += 1
            eax_3 = &eax_3[0x54]
            
            if (ecx_1 s>= edx_1)
                return eax_3
            
            continue
        
        sub_489550(eax_3, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\structure.cpp", var_c, 
            "StructureLoad")
        eax_4 = IsDebuggerPresent()
        break
    
    if (eax_4 != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
