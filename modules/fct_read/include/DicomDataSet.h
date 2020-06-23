#include <RawDataSet.h>

#include <dcmtk/config/osconfig.h>
#include <dcmtk/dcmdata/dctk.h>
#include <dcmtk/dcmdata/dcistrmf.h>

namespace fct{

  class DicomFrame: public RawDataFrame{
  public:
    virtual bool readFromFile(std::string filepath);
  };
  
  class DicomDataSet: public RawDataSet{
    virtual void readAll();
  };
}
