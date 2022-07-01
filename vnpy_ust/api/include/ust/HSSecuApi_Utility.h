#pragma once
#include <vector>
#include <string>
#include "HSSecuTradeApi.h"


struct HsDict
{
	std::string HsConstName;
	std::string HsDictValue;
	std::string HsDictPrompt;
};

class ApiUtility {
public:
	static TRADE_API_EXPORT ApiUtility* NewApiUtility(CHSSecuTradeApi* tradeApi);

	#pragma region 数据字典
	///获取恒生标准字段的描述
	virtual void GetFieldPrompt(std::string& fieldPrompt, std::string fieldName) = 0;

	///获取恒生标准字段的字典项集合
	virtual void GetDictInfoByFieldName(std::vector<HsDict>& dictVector, std::string fieldName) = 0;
	
	///获取fieldName及HsDictValue对应的字典项描述
	virtual void GetDictInfoByFieldName(std::string& dictPrompt, std::string fieldName, std::string dictValue) = 0;

	///获取fieldName及HsDictValue对应的字典项描述
	virtual void GetDictInfoByFieldName(std::string& dictPrompt, std::string fieldName, char dictValue) = 0;

	///获取fieldName及HsDictValue对应的字典项描述
	virtual void GetDictInfoByFieldName(std::string& dictPrompt, std::string fieldName, int dictValue) = 0;

	///获取fieldName及HsDictValue对应的字典项描述
	virtual void GetDictInfoByFieldName(std::string& dictPrompt, std::string fieldName, double dictValue) = 0;

	#pragma endregion

	#pragma region 反射
	///获取结构体第index个结构体字段名称,设置到FieldName中,index从0开始.若下标超限或structName不合法，则函数返回值小于0
	virtual int GetAPIStructFieldName(const char* structName, int index, std::string& FieldName) = 0;
	
	///获取structAddr结构体对象中第index个结构体字段的值,设置到FieldValue中,index从0开始.若下标超限或structName不合法，则函数返回值小于0
	virtual int GetAPIStructFieldValueByIndex(const char* structName, void* structAddr, int index, std::string& fieldValue) = 0;

	///获取structAddr结构体对象中名称为‘fieldName’字段的值,设置到FieldValue中,若字段不存在或structName不合法，则函数返回值小于0
	virtual int GetAPIStructFieldValueByName(const char* structName, void* structAddr, const char* fieldName, std::string& fieldValue) = 0;

	///获取结构体字段总数.若structName不合法，则函数返回值小于0
	virtual int GetAPIStructFieldCounts(const char* structName) = 0;
	#pragma endregion

protected:
	~ApiUtility() {};
	ApiUtility() {};
};

extern   "C"
{
	/// Description: 创建辅助类接口    
	/// Input      : tradeApi    api实例   
	TRADE_API_EXPORT ApiUtility* NewApiUtility(CHSSecuTradeApi* tradeApi);
}
