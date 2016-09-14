/** ==========================================================================
 * 2011 by KjellKod.cc. This is PUBLIC DOMAIN to use at your own risk and comes
 * with no warranties. This code is yours to share, use and modify with no
 * strings attached and no restrictions or obligations.
 *
 * For more information see g3log/LICENSE or refer refer to http://unlicense.org
 * ============================================================================*/

#include "g3log/crashhandler.hpp"

namespace g3 {
   namespace internal {
      bool shouldBlockForFatalHandling() {
         return false;
      }

      std::string stackdump(const char* rawdump) {
         return {};
      }

      std::string exitReasonName(const LEVELS& level, g3::SignalType fatal_id) {
         return {};
      }

      void exitWithDefaultSignalHandler(const LEVELS& level, g3::SignalType fatal_signal_id) {
      }
   } // end g3::internal

   void installSignalHandlerForThread(void) {
   }
   
   void overrideSetupSignals(const std::map<int, std::string> overrideSignals) {
   }

   void restoreSignalHandlerToDefault() {
   }

   void installCrashHandler() {
   }
} // end namespace g3

