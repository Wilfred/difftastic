public struct OperatorUsageWhitespaceConfiguration: RuleConfiguration, Equatable {
    private(set) var severityConfiguration = SeverityConfiguration(.warning)
//  ^ keyword
//          ^ keyword
    private(set) var linesLookAround = 2
    private(set) var skipAlignedConstants = true
    private(set) var allowedNoSpaceOperators: [String] = ["...", "..<"]

    public var consoleDescription: String {
        return severityConfiguration.consoleDescription
            + ", lines_look_around: \(linesLookAround)"
            + ", skip_aligned_constants: \(skipAlignedConstants)"
            + ", allowed_no_space_operators: \(allowedNoSpaceOperators)"
    }

    public mutating func apply(configuration: Any) throws {
//                                                 ^ keyword
        guard let configuration = configuration as? [String: Any] else {
//                                              ^ keyword
//                                                ^ keyword
            throw ConfigurationError.unknownConfiguration
//          ^ keyword
        }

        linesLookAround = configuration["lines_look_around"] as? Int ?? 2
        skipAlignedConstants = configuration["skip_aligned_constants"] as? Bool ?? true
        allowedNoSpaceOperators =
            configuration["allowed_no_space_operators"] as? [String] ?? ["...", "..<"]

        if let severityString = configuration["severity"] as? String {
            try severityConfiguration.apply(configuration: severityString)
        }
    }
}
