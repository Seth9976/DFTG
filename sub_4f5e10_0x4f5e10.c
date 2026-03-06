// 函数名称: sub_4f5e10
// 虚拟地址: 0x4f5e10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4f5e10(int32_t arg1, int32_t* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* ecx
    void* ecx
    void* result_1 = sub_4f5990(ecx)
    void* result = result_1
    *result = 0xd
    int32_t var_10
    char const* const ecx_1
    
    if (*arg2 == 3)
        *(result + 0xc) = arg2[1]
        result_1 = arg3
        
        if (*result_1 == 3)
            *(result + 0x10) = *(result_1 + 4)
            result_1 = arg4
            
            if (*result_1 == 3)
                *(result + 0x14) = *(result_1 + 4)
                return result
            
            char const* const var_c_2 = "UI2ExprMakeCurveExpression"
            var_10 = 0xe4
            ecx_1 = "resultStyle.result == UIPARSERESULT_SUCCESS_EXPRESSION"
        else
            char const* const var_c_1 = "UI2ExprMakeCurveExpression"
            var_10 = 0xe2
            ecx_1 = "resultSecond.result == UIPARSERESULT_SUCCESS_EXPRESSION"
    else
        char const* const var_c = "UI2ExprMakeCurveExpression"
        var_10 = 0xe0
        ecx_1 = "resultFirst.result == UIPARSERESULT_SUCCESS_EXPRESSION"
    
    sub_489550(result_1, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\ui2expr.cpp", var_10, 
        "UI2ExprMakeCurveExpression")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
