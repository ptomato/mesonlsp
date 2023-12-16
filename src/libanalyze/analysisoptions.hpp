#pragma once

class AnalysisOptions {
public:
  bool disableNameLinting;
  bool disableAllIdLinting;
  bool disableCompilerIdLinting;
  bool disableCompilerArgumentIdLinting;
  bool disableLinkerIdLinting;
  bool disableCpuFamilyLinting;
  bool disableOsFamilyLinting;

  // This should be a better API somehow
  AnalysisOptions(bool disableNameLinting = false,
                  bool disableAllIdLinting = false,
                  bool disableCompilerIdLinting = false,
                  bool disableCompilerArgumentIdLinting = false,
                  bool disableLinkerIdLinting = false,
                  bool disableCpuFamilyLinting = false,
                  bool disableOsFamilyLinting = false)
      : disableNameLinting(disableNameLinting),
        disableAllIdLinting(disableAllIdLinting),
        disableCompilerIdLinting(disableCompilerIdLinting),
        disableCompilerArgumentIdLinting(disableCompilerArgumentIdLinting),
        disableLinkerIdLinting(disableLinkerIdLinting),
        disableCpuFamilyLinting(disableCpuFamilyLinting),
        disableOsFamilyLinting(disableOsFamilyLinting) {}
};