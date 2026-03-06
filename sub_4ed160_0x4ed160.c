// 函数名称: sub_4ed160
// 虚拟地址: 0x4ed160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4ed160(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_14 = 0
    int32_t var_14 = 0
    int32_t* result = sub_4eeb50(arg1)
    int32_t* result_1 = result
    
    if (*result_1 != 0)
        uint32_t eax = sub_4979c0(&result_1[0x10])
        int32_t var_28
        char* ecx_1
        
        if (eax.b == 0)
            char const* const var_24_1 = "FabDraw"
            var_28 = 0x4c9
            ecx_1 = "QuatIsValid(state.transform.t.r)"
        label_4ed21d:
            sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\fabdef.cpp", var_28, 
                "FabDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = sub_4edbe0(&var_14, arg2, result_1, &var_14)
        int32_t esi_1 = 0
        
        if (result_1[0x11f] s> 0)
            void* edi_1 = &result_1[0x9f]
            
            while (true)
                int32_t* eax_2 = sub_4eeb50(*edi_1)
                eax = sub_4979c0(&eax_2[0x10])
                
                if (eax.b == 0)
                    break
                
                result = sub_4edbe0(&var_14, arg2, eax_2, &var_14)
                esi_1 += 1
                edi_1 += 4
                
                if (esi_1 s>= result_1[0x11f])
                    return result
            
            char const* const var_24_5 = "FabDraw"
            var_28 = 0x4ce
            ecx_1 = "QuatIsValid(addedState.transform.t.r)"
            goto label_4ed21d
    
    return result
}
