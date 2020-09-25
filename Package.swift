// swift-tools-version:5.0
import PackageDescription

let package = Package(
    name: "SimpleExif",
    platforms: [.iOS(.v9), .macOS(.v10_10)],
    products: [
        .library(
            name: "SimpleExif",
            targets: ["SimpleExif"]
        )
    ],
    targets: [
        .target(
            name: "SimpleExif",
            path: "Classes",
            publicHeadersPath: ""
        )
    ]
)
